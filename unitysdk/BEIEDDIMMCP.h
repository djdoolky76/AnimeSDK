#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPIPGBDLNMM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEIEDDIMMCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88A6F0)

inline static constexpr unsigned int BEIEDDIMMCP_TypeDefinitionIndex = 42838;

	class BEIEDDIMMCP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KPIPGBDLNMM*>* OGKKJKFNCFL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIEDDIMMCP_CTOR_OFFSET))(this);
		}

	};
