#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMFGILLIKOL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEMPJKLAAPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F7300)

inline static constexpr unsigned int DEMPJKLAAPG_TypeDefinitionIndex = 43713;

	class DEMPJKLAAPG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IMFGILLIKOL*>* HMDBBNLCCKN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMPJKLAAPG_CTOR_OFFSET))(this);
		}

	};
