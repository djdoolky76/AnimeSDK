#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DONFJJIGKIL.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/ABAGHPMMICI.h"
#include "unitysdk/DLMMAMJGPCI.h"
#include "unitysdk/JNCLHPMCNJN.h"
#include "unitysdk/LKEJGLHLBOH.h"

class FBAMLABJMKF;
class FFDNKIDGFMD;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::Config { class ConfigHollowCameraAvoidObstacle; }

#define OMIKNPHDPMA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1294DD30)
#define OMIKNPHDPMA_PBGAEMAIBBE_OFFSET UNITYSDK_OFFSET(0x1294D320)
#define OMIKNPHDPMA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1294DCE0)
#define OMIKNPHDPMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1294DCD0)

inline static constexpr unsigned int OMIKNPHDPMA_TypeDefinitionIndex = 84761;

class OMIKNPHDPMA : public ::DONFJJIGKIL
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_EJBNGAHODJJ()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(OMIKNPHDPMA_TypeDefinitionIndex)->GetStaticField(0x4C940);
	}
	::FBAMLABJMKF* CKCJPICGPIG; // 0x10
	::MoleMole::UIHollowChessboard3DModelController* BDEFFPHDGNJ; // 0x18
	::MoleMole::Config::ConfigHollowCameraAvoidObstacle* CMLPKIFGOJJ; // 0x20
	::System::Boolean MCHMCGHELNN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMIKNPHDPMA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMIKNPHDPMA__CCTOR_OFFSET))();
	}

	::System::Boolean PBGAEMAIBBE(::FFDNKIDGFMD* ABOGJGCIOKD, ::JNCLHPMCNJN& GHHJACHBEPA, ::DLMMAMJGPCI& NKFCNIPEOMP, ::ABAGHPMMICI& JBAAOKJHJMH, ::LKEJGLHLBOH& FJKOPFAAFBD)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFDNKIDGFMD*, ::JNCLHPMCNJN&, ::DLMMAMJGPCI&, ::ABAGHPMMICI&, ::LKEJGLHLBOH&))((::PBYTE)hIl2Cpp + OMIKNPHDPMA_PBGAEMAIBBE_OFFSET))(this, ABOGJGCIOKD, GHHJACHBEPA, NKFCNIPEOMP, JBAAOKJHJMH, FJKOPFAAFBD);
	}

	static ::OMIKNPHDPMA* COKNIICCODC(::FBAMLABJMKF* COBEJJHGMPO, ::MoleMole::Config::ConfigHollowCameraAvoidObstacle* CMEAFGBIKNJ)
	{
		return ((::OMIKNPHDPMA*(*)(::FBAMLABJMKF*, ::MoleMole::Config::ConfigHollowCameraAvoidObstacle*))((::PBYTE)hIl2Cpp + OMIKNPHDPMA_COKNIICCODC_OFFSET))(COBEJJHGMPO, CMEAFGBIKNJ);
	}
};
