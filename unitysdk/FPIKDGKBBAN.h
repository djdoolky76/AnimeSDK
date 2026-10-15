#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyCellPeformanceType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FPIKDGKBBAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1590F9C0)
#define FPIKDGKBBAN_DFILDMGKFAD_OFFSET UNITYSDK_OFFSET(0x1590EE60)
#define FPIKDGKBBAN_ENNCCPIDPGI_OFFSET UNITYSDK_OFFSET(0x1590F530)
#define FPIKDGKBBAN_GIBABKGHHJA_OFFSET UNITYSDK_OFFSET(0x1590F650)
#define FPIKDGKBBAN_MBEGFDMEMBG_OFFSET UNITYSDK_OFFSET(0x1590F750)
#define FPIKDGKBBAN_OEGANPJGOIG_OFFSET UNITYSDK_OFFSET(0x1590EF60)

inline static constexpr unsigned int FPIKDGKBBAN_TypeDefinitionIndex = 66265;

	class FPIKDGKBBAN : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* IHEKIDJHBCB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*>* KPAADJNLHBL; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonopolyCellPeformanceType>* JOAHDLJKOMF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKDGKBBAN_CTOR_OFFSET))(this);
		}

		::System::Boolean DFILDMGKFAD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FPIKDGKBBAN_DFILDMGKFAD_OFFSET))(this, a1, a2);
		}

		::System::UInt32 ENNCCPIDPGI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FPIKDGKBBAN_ENNCCPIDPGI_OFFSET))(this, a1, a2);
		}

		::System::Void OEGANPJGOIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKDGKBBAN_OEGANPJGOIG_OFFSET))(this);
		}

		::RPG::GameCore::MonopolyCellPeformanceType GIBABKGHHJA(::System::String* a1)
		{
			return ((::RPG::GameCore::MonopolyCellPeformanceType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FPIKDGKBBAN_GIBABKGHHJA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonopolyCellPeformanceType>* MBEGFDMEMBG()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonopolyCellPeformanceType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKDGKBBAN_MBEGFDMEMBG_OFFSET))(this);
		}

	};
