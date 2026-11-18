#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJIDPKABBFD.h"
#include "unitysdk/UnityEngine/Color.h"

class AIKGHHJKNCE;
class MCFPPILFGDB;
class OGHFHMMPMPC;
namespace MoleMole::Config { class ConfigHollowChessboard; }

#define MGPENPLAHEM_KEOOBDIAMNB_OFFSET UNITYSDK_OFFSET(0x11F4A270)
#define MGPENPLAHEM_MJABCNJNIEM_OFFSET UNITYSDK_OFFSET(0x11F49E10)
#define MGPENPLAHEM_MMIHCLPNEDH_OFFSET UNITYSDK_OFFSET(0x11F4A3D0)
#define MGPENPLAHEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F4A3C0)
#define MGPENPLAHEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11F49DA0)

inline static constexpr unsigned int MGPENPLAHEM_TypeDefinitionIndex = 84034;

class MGPENPLAHEM : public ::AJIDPKABBFD
{
public:
	static ::UnityEngine::Color* StaticGet_MKFLOJOEJCG()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(MGPENPLAHEM_TypeDefinitionIndex)->GetStaticField(0xE500);
	}
	::MoleMole::Config::ConfigHollowChessboard* ENBIMBGCCBD; // 0x10
	::OGHFHMMPMPC* CLOIJPFMDHA; // 0x18

	::System::Void _ctor(::OGHFHMMPMPC* MBBDJEHGFGI, ::MoleMole::Config::ConfigHollowChessboard* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::OGHFHMMPMPC*, ::MoleMole::Config::ConfigHollowChessboard*))((::PBYTE)hIl2Cpp + MGPENPLAHEM__CTOR_OFFSET))(this, MBBDJEHGFGI, DFMKILICPFB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGPENPLAHEM__CCTOR_OFFSET))();
	}

	::System::Void MJABCNJNIEM(::AIKGHHJKNCE* CENDLIKDNJA, ::MCFPPILFGDB* IIBEJINPIJO)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*, ::MCFPPILFGDB*))((::PBYTE)hIl2Cpp + MGPENPLAHEM_MJABCNJNIEM_OFFSET))(this, CENDLIKDNJA, IIBEJINPIJO);
	}

	::System::Boolean KEOOBDIAMNB(::AIKGHHJKNCE* CENDLIKDNJA)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + MGPENPLAHEM_KEOOBDIAMNB_OFFSET))(this, CENDLIKDNJA);
	}

	::System::Void MMIHCLPNEDH(::AIKGHHJKNCE* MIALFKCCCPI, ::MCFPPILFGDB* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*, ::MCFPPILFGDB*))((::PBYTE)hIl2Cpp + MGPENPLAHEM_MMIHCLPNEDH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
