#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraFollowClampMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BILMKGHAIOC_CFOOBPHMJJC_OFFSET UNITYSDK_OFFSET(0x3C2F300)

inline static constexpr unsigned int BILMKGHAIOC_TypeDefinitionIndex = 43259;

	struct alignas(4) BILMKGHAIOC
	{
		::System::Boolean OCAAKECGCFK; // 0x10
		::System::Boolean GMAKNBCPKPP; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 KGAGMMILGFI; // 0x14
		::System::Single NPGOBPBHJAC; // 0x18
		::KLNKLOMDIIC CKOHLGADLJM; // 0x1C
		::UnityEngine::Rect DMKLCDIOHOA; // 0x84
		::RPG::GameCore::FiveDimCameraFollowClampMask HAPJILPJJGB; // 0x94
		::RPG::GameCore::FiveDimCameraFollowClampMask HLDIDBFPMCH; // 0x98
		::System::Single MMPEJFHJGGE; // 0x9C
		::System::Single JHMLGFPFLLB; // 0xA0
		::System::Single HCGPOANOHMP; // 0xA4
		::System::Boolean KLLBNPLCDAJ; // 0xA8
		::System::Byte _padding1[0x3];
		::System::Single JELFEAMONNK; // 0xAC
		::System::Boolean ALIGCOEPIIN; // 0xB0
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector3 CMKEACDICJM; // 0xB4
		::System::Single IKKHKHGHKNG; // 0xC0
		::System::Boolean PKAFABOBAOL; // 0xC4
		::System::Boolean JHODHCPGDDC; // 0xC5
		::System::Boolean EPGHPIMDDAP; // 0xC6
		::System::Boolean CHNFCKHGMIH; // 0xC7
		::System::Single NAMOPBPDMEF; // 0xC8
		::System::Single IPHEJEFGCEK; // 0xCC
		::KLNKLOMDIIC HCDEPAGHNPH; // 0xD0
		::KLNKLOMDIIC CMGFJGAPJLE; // 0x138
		::UnityEngine::Vector3 CBJIFDHBHJN; // 0x1A0
		::UnityEngine::Quaternion PBHOONCNPDO; // 0x1AC
		::UnityEngine::Vector2 EEOPDLAKNPD; // 0x1BC
		::UnityEngine::Vector2 LFGIKNPBJKM; // 0x1C4
		::UnityEngine::Vector2 FJHKHJIHDPP; // 0x1CC
		::System::Boolean JLGIDAHJHLG; // 0x1D4
		::System::Boolean GPJBEJIFKMC; // 0x1D5
		::System::Boolean CJGOLLLLIFB; // 0x1D6
		::System::Boolean COGODALAJCE; // 0x1D7
		::System::Single BIOCDBLDMIK; // 0x1D8
		::System::Boolean FAOMAJDKLAB; // 0x1DC
		::System::Byte _padding3[0x3];
		::System::Single GMPJEHJNOLF; // 0x1E0
		::System::Boolean GGJEGOIFJGO; // 0x1E4
		::System::Boolean AEAJEACNLNA; // 0x1E5
		::System::Boolean CPMPONNGHEI; // 0x1E6
		::System::Void CFOOBPHMJJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILMKGHAIOC_CFOOBPHMJJC_OFFSET))(this);
		}

	};
