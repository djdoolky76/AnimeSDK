#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPMCBFLFDIL;
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define LLLEEIILBCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE3A740)
#define LLLEEIILBCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3A730)
#define LLLEEIILBCB_DCCACKNOBKM_OFFSET UNITYSDK_OFFSET(0x1DE3A6F0)
#define LLLEEIILBCB_FMMGNFDCMCN_OFFSET UNITYSDK_OFFSET(0x1DE3A680)

inline static constexpr unsigned int LLLEEIILBCB_TypeDefinitionIndex = 44951;

	class LLLEEIILBCB : public ::System::Object
	{
	public:
		static ::JPMCBFLFDIL** StaticGet_FMJPMFEDIJL()
		{
			return (::JPMCBFLFDIL**)UnitySDK::FromName("", "LLLEEIILBCB")->GetStaticField(0x1060);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLEEIILBCB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLLEEIILBCB_CCTOR_OFFSET))();
		}

		::System::Boolean FMMGNFDCMCN(::System::String* a1, ::RPG::GameCore::DynamicValue* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + LLLEEIILBCB_FMMGNFDCMCN_OFFSET))(this, a1, a2);
		}

		::System::String* DCCACKNOBKM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLEEIILBCB_DCCACKNOBKM_OFFSET))(this);
		}

	};
