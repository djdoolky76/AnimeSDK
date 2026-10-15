#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DJMFLECOALG;
class HCMJGNAPIBD;
class HPOJGFBONKL;
class PDEFOKILHLE;
class PMAJDIAJMKG;
namespace RPG::GameCore { class FateTextDynamicParamConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMAJDIAJMKG_BDDAENDFGEE_OFFSET UNITYSDK_OFFSET(0xC3122E0)
#define PMAJDIAJMKG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC311AF0)
#define PMAJDIAJMKG_CTOR_OFFSET UNITYSDK_OFFSET(0xC311AE0)
#define PMAJDIAJMKG_OACBGCFADMP_OFFSET UNITYSDK_OFFSET(0xC311EC0)
#define PMAJDIAJMKG_ODACMIKBHFL_OFFSET UNITYSDK_OFFSET(0xC312280)
#define PMAJDIAJMKG_OJDCGOJDKNP_OFFSET UNITYSDK_OFFSET(0xC3124A0)

	class PMAJDIAJMKG : public ::System::Object
	{
	public:
		::PDEFOKILHLE* DCODGIIFGPI; // 0x10
		::System::Collections::Generic::List_1<::HPOJGFBONKL*>* MLNLKAEKPJN; // 0x18
		::RPG::Client::TextID DIDPADKMCAL; // 0x20
		// static const ::System::Object COBAKFNJKPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAJDIAJMKG_CTOR_OFFSET))(this);
		}

		static ::PMAJDIAJMKG* BPLPBPMEODA(::RPG::Client::TextID a1, ::RPG::GameCore::FateTextDynamicParamConfig* a2, ::HCMJGNAPIBD* a3, ::DJMFLECOALG* a4)
		{
			return ((::PMAJDIAJMKG*(*)(::RPG::Client::TextID, ::RPG::GameCore::FateTextDynamicParamConfig*, ::HCMJGNAPIBD*, ::DJMFLECOALG*))((::PBYTE)hIl2Cpp + PMAJDIAJMKG_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::String* OACBGCFADMP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMAJDIAJMKG_OACBGCFADMP_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* ODACMIKBHFL(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + PMAJDIAJMKG_ODACMIKBHFL_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::System::Object*>* OJDCGOJDKNP(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + PMAJDIAJMKG_OJDCGOJDKNP_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Object*>* BDDAENDFGEE(::Il2CppArray<::RPG::GameCore::FixPoint>* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::String*))((::PBYTE)hIl2Cpp + PMAJDIAJMKG_BDDAENDFGEE_OFFSET))(a1, a2);
		}

	};
