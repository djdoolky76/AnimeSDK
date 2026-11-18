#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MNGPGMEPCNN;
class NDPKMBMGBKB;
class PJHKDJEGJOG;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }

#define EMDFLOBAPHI_CPBNEIEMHCJ_OFFSET UNITYSDK_OFFSET(0x12364050)
#define EMDFLOBAPHI_DNBJJBJAMLG_OFFSET UNITYSDK_OFFSET(0x12363E60)
#define EMDFLOBAPHI_DNHEFBFPIJO_OFFSET UNITYSDK_OFFSET(0x12364C10)
#define EMDFLOBAPHI_HBLOGKIJBJH_OFFSET UNITYSDK_OFFSET(0x12364140)
#define EMDFLOBAPHI_INLMDCGFHFM_OFFSET UNITYSDK_OFFSET(0x123641B0)
#define EMDFLOBAPHI_OFJCNIKHCJH_OFFSET UNITYSDK_OFFSET(0x123645C0)
#define EMDFLOBAPHI__CCTOR_OFFSET UNITYSDK_OFFSET(0x12363E50)
#define EMDFLOBAPHI__CTOR_OFFSET UNITYSDK_OFFSET(0x12363E40)

inline static constexpr unsigned int EMDFLOBAPHI_TypeDefinitionIndex = 72523;

class EMDFLOBAPHI : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_MOFMHMGOEFJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EMDFLOBAPHI_TypeDefinitionIndex)->GetStaticField(0xA730);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDFLOBAPHI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMDFLOBAPHI__CCTOR_OFFSET))();
	}

	::System::Void DNBJJBJAMLG(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMDFLOBAPHI_DNBJJBJAMLG_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Void HBLOGKIJBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDFLOBAPHI_HBLOGKIJBJH_OFFSET))(this);
	}

	static ::MoleMole::InLevelAvatarDataItem* INLMDCGFHFM(::PJHKDJEGJOG* IPAPAJFDDEB, ::MoleMole::AvatarInitData* NHEPEEIPENO, ::System::Boolean LFDGINIPCHM)
	{
		return ((::MoleMole::InLevelAvatarDataItem*(*)(::PJHKDJEGJOG*, ::MoleMole::AvatarInitData*, ::System::Boolean))((::PBYTE)hIl2Cpp + EMDFLOBAPHI_INLMDCGFHFM_OFFSET))(IPAPAJFDDEB, NHEPEEIPENO, LFDGINIPCHM);
	}

	::System::Void OFJCNIKHCJH(::MNGPGMEPCNN* JNNONDPJHBI)
	{
		return ((::System::Void(*)(::PVOID, ::MNGPGMEPCNN*))((::PBYTE)hIl2Cpp + EMDFLOBAPHI_OFJCNIKHCJH_OFFSET))(this, JNNONDPJHBI);
	}

	::System::Void DNHEFBFPIJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDFLOBAPHI_DNHEFBFPIJO_OFFSET))(this);
	}

	::NDPKMBMGBKB* CPBNEIEMHCJ()
	{
		return ((::NDPKMBMGBKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDFLOBAPHI_CPBNEIEMHCJ_OFFSET))(this);
	}
};
