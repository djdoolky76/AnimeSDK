#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMonoBehaviour.h"

class B26CC95B76FBBA13_Config;
namespace CriWare { class CriAtomConfig; }
namespace CriWare { class CriFsConfig; }
namespace CriWare { class CriManaConfig; }

#define CRIWARE_CRIWAREINITIALIZER_A1CDC28028159AC7_OFFSET UNITYSDK_OFFSET(0x2AB20D0)
#define CRIWARE_CRIWAREINITIALIZER_A788EA8D7C189191_OFFSET UNITYSDK_OFFSET(0x2AB25E0)
#define CRIWARE_CRIWAREINITIALIZER_A8383869C2788AA4_OFFSET UNITYSDK_OFFSET(0x2AB1330)
#define CRIWARE_CRIWAREINITIALIZER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2AB2B60)
#define CRIWARE_CRIWAREINITIALIZER_AFE8029CE948BDD8_OFFSET UNITYSDK_OFFSET(0x2AB2B60)
#define CRIWARE_CRIWAREINITIALIZER_B5B4F68A9D0C6F29_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define CRIWARE_CRIWAREINITIALIZER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2AB2C70)
#define CRIWARE_CRIWAREINITIALIZER_E04C615DEA78EE9D_OFFSET UNITYSDK_OFFSET(0x2AB1550)
#define CRIWARE_CRIWAREINITIALIZER_E192657B25556063_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define CRIWARE_CRIWAREINITIALIZER_E5C36F4F17838B72_OFFSET UNITYSDK_OFFSET(0x2AB2B10)
#define CRIWARE_CRIWAREINITIALIZER_E7C75E9A4E3DFAD4_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define CRIWARE_CRIWAREINITIALIZER_E851528133635437_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define CRIWARE_CRIWAREINITIALIZER_E8642046E7EC728F_OFFSET UNITYSDK_OFFSET(0x2AB1F70)
#define CRIWARE_CRIWAREINITIALIZER_ED1C58F41E3BAC83_OFFSET UNITYSDK_OFFSET(0x2AB2C80)
#define CRIWARE_CRIWAREINITIALIZER_F0AD78B9F1309DCA_OFFSET UNITYSDK_OFFSET(0x2AB2C80)
#define CRIWARE_CRIWAREINITIALIZER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2AB1520)
#define CRIWARE_CRIWAREINITIALIZER_FE0C4BACA9717677_OFFSET UNITYSDK_OFFSET(0x2AB2C80)
#define CRIWARE_CRIWAREINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB2CF0)

namespace CriWare
{
	inline static constexpr unsigned int CriWareInitializer_TypeDefinitionIndex = 19116;

	class CriWareInitializer : public ::CriWare::CriMonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_B41773B055A9967E()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CriWareInitializer_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean initializesFileSystem; // 0x30
		::System::Byte _padding0[0x7];
		::CriWare::CriFsConfig* fileSystemConfig; // 0x38
		::System::Boolean initializesAtom; // 0x40
		::System::Byte _padding1[0x7];
		::CriWare::CriAtomConfig* atomConfig; // 0x48
		::System::Boolean initializesMana; // 0x50
		::System::Byte _padding2[0x7];
		::CriWare::CriManaConfig* manaConfig; // 0x58
		::System::Boolean useDecrypter; // 0x60
		::System::Byte _padding3[0x7];
		::B26CC95B76FBBA13_Config* DecrypterConfig; // 0x68
		::System::Boolean dontInitializeOnAwake; // 0x70
		::System::Boolean dontDestroyOnLoad; // 0x71

		::System::Void B5B4F68A9D0C6F29()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_B5B4F68A9D0C6F29_OFFSET))(this);
		}

		::System::Void FE0C4BACA9717677()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_FE0C4BACA9717677_OFFSET))(this);
		}

		static ::System::Boolean A1CDC28028159AC7(::CriWare::CriManaConfig* ACDE58E97E37D13C)
		{
			return ((::System::Boolean(*)(::CriWare::CriManaConfig*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_A1CDC28028159AC7_OFFSET))(ACDE58E97E37D13C);
		}

		::System::Void F0AD78B9F1309DCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_F0AD78B9F1309DCA_OFFSET))(this);
		}

		::System::Void E851528133635437()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_E851528133635437_OFFSET))(this);
		}

		static ::System::Boolean E5C36F4F17838B72()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_E5C36F4F17838B72_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER__CTOR_OFFSET))(this);
		}

		::System::Void E192657B25556063()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_E192657B25556063_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		static ::System::Void A8383869C2788AA4(::System::IntPtr E61F7C7DEC84DBA5)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_A8383869C2788AA4_OFFSET))(E61F7C7DEC84DBA5);
		}

		::System::Void AFE8029CE948BDD8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_AFE8029CE948BDD8_OFFSET))(this);
		}

		::System::Void A788EA8D7C189191()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_A788EA8D7C189191_OFFSET))(this);
		}

		static ::System::Boolean E8642046E7EC728F(::CriWare::CriFsConfig* ACDE58E97E37D13C)
		{
			return ((::System::Boolean(*)(::CriWare::CriFsConfig*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_E8642046E7EC728F_OFFSET))(ACDE58E97E37D13C);
		}

		static ::System::Boolean E04C615DEA78EE9D(::CriWare::CriAtomConfig* ACDE58E97E37D13C)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomConfig*))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_E04C615DEA78EE9D_OFFSET))(ACDE58E97E37D13C);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void E7C75E9A4E3DFAD4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_E7C75E9A4E3DFAD4_OFFSET))(this);
		}

		::System::Void ED1C58F41E3BAC83()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIWAREINITIALIZER_ED1C58F41E3BAC83_OFFSET))(this);
		}
	};
}
