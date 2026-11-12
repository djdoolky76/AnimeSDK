#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class JEALAGIGPFB_Evaluator;
namespace RPG::Client { class MonoValueEvaluateConfigure; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JEALAGIGPFB_CTOR_OFFSET UNITYSDK_OFFSET(0xB95D9F0)
#define JEALAGIGPFB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB95CDB0)
#define JEALAGIGPFB_EIIFHGKPCAN_OFFSET UNITYSDK_OFFSET(0xB95C9C0)
#define JEALAGIGPFB_FEACNFEKAGI_OFFSET UNITYSDK_OFFSET(0xB95C8B0)
#define JEALAGIGPFB_ILLFGJMPFMI_OFFSET UNITYSDK_OFFSET(0xB95D5F0)
#define JEALAGIGPFB_NCNAFKHJAJG_OFFSET UNITYSDK_OFFSET(0xB95D980)
#define JEALAGIGPFB_OIDNHFEDNPN_OFFSET UNITYSDK_OFFSET(0xB95D700)
#define JEALAGIGPFB_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xB95CD00)
#define JEALAGIGPFB_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB95D5A0)
#define JEALAGIGPFB_TICK_OFFSET UNITYSDK_OFFSET(0xB95CFE0)
#define JEALAGIGPFB__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB95CC40)

inline static constexpr unsigned int JEALAGIGPFB_TypeDefinitionIndex = 58652;

	class JEALAGIGPFB : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MonoValueEvaluateConfigure* CEPGFGIOMDB; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* FJKHBIMOACG; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* PEANBBFBKHA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_CTOR_OFFSET))(this);
		}

		::System::Void FEACNFEKAGI(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_FEACNFEKAGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEALAGIGPFB_TICK_OFFSET))(this, a1);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEALAGIGPFB_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void ILLFGJMPFMI(::JEALAGIGPFB_Evaluator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEALAGIGPFB_Evaluator*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_ILLFGJMPFMI_OFFSET))(this, a1);
		}

		::System::Void OIDNHFEDNPN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_OIDNHFEDNPN_OFFSET))(this, a1);
		}

		::System::Void NCNAFKHJAJG(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEALAGIGPFB_NCNAFKHJAJG_OFFSET))(this, a1, a2);
		}

		::JEALAGIGPFB_Evaluator* EIIFHGKPCAN(::System::String* a1)
		{
			return ((::JEALAGIGPFB_Evaluator*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEALAGIGPFB_EIIFHGKPCAN_OFFSET))(this, a1);
		}

	};
