#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMDPEENJIHC;
namespace System { class String; }

#define JHFDPHILOOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A9A80)

inline static constexpr unsigned int JHFDPHILOOP_TypeDefinitionIndex = 64792;

	class JHFDPHILOOP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* IDs; // 0x10
		::PMDPEENJIHC* Base; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFDPHILOOP_CTOR_OFFSET))(this);
		}

	};
