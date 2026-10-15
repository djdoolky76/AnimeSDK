#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMDPEENJIHC;
namespace System { class String; }

#define IIMDGCBKGLF_CTOR_OFFSET UNITYSDK_OFFSET(0x164408B0)

inline static constexpr unsigned int IIMDGCBKGLF_TypeDefinitionIndex = 64788;

	class IIMDGCBKGLF : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* IDs; // 0x10
		::PMDPEENJIHC* Base; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMDGCBKGLF_CTOR_OFFSET))(this);
		}

	};
