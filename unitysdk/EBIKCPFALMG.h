#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPMCBFLFDIL;
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define EBIKCPFALMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x20934030)
#define EBIKCPFALMG_CTOR_OFFSET UNITYSDK_OFFSET(0x20934020)
#define EBIKCPFALMG_DCCACKNOBKM_OFFSET UNITYSDK_OFFSET(0x20933FE0)
#define EBIKCPFALMG_FMMGNFDCMCN_OFFSET UNITYSDK_OFFSET(0x20933F70)

inline static constexpr unsigned int EBIKCPFALMG_TypeDefinitionIndex = 44952;

	class EBIKCPFALMG : public ::System::Object
	{
	public:
		static ::JPMCBFLFDIL** StaticGet_FMJPMFEDIJL()
		{
			return (::JPMCBFLFDIL**)UnitySDK::FromName("", "EBIKCPFALMG")->GetStaticField(0x1050);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIKCPFALMG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBIKCPFALMG_CCTOR_OFFSET))();
		}

		::System::Boolean FMMGNFDCMCN(::System::String* a1, ::RPG::GameCore::DynamicValue* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + EBIKCPFALMG_FMMGNFDCMCN_OFFSET))(this, a1, a2);
		}

		::System::String* DCCACKNOBKM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIKCPFALMG_DCCACKNOBKM_OFFSET))(this);
		}

	};
