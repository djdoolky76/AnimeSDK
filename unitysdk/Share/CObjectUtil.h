#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Share { class CRandom; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SHARE_COBJECTUTIL_SHUFFLEINDEXS_OFFSET UNITYSDK_OFFSET(0x1D0097C0)

namespace Share
{
	inline static constexpr unsigned int CObjectUtil_TypeDefinitionIndex = 11985;

	class CObjectUtil : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>* ShuffleIndexs(::System::Int32 num, ::Share::CRandom* random)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Int32, ::Share::CRandom*))((::PBYTE)hIl2Cpp + SHARE_COBJECTUTIL_SHUFFLEINDEXS_OFFSET))(num, random);
		}
	};
}
