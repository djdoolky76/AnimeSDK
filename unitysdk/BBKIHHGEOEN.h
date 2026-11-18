#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Dest/Math/Box3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BBKIHHGEOEN_CGJOMMHGJAL_OFFSET UNITYSDK_OFFSET(0x169DC390)
#define BBKIHHGEOEN_DDJDAHKLFLG_OFFSET UNITYSDK_OFFSET(0x169DC680)
#define BBKIHHGEOEN_GKEFLNPPPCA_1_OFFSET UNITYSDK_OFFSET(0x169DC000)
#define BBKIHHGEOEN_GKEFLNPPPCA_OFFSET UNITYSDK_OFFSET(0x169DBB60)
#define BBKIHHGEOEN_HGBBAHKMBMA_OFFSET UNITYSDK_OFFSET(0x169DBDF0)
#define BBKIHHGEOEN_HJEMHNJDIJF_OFFSET UNITYSDK_OFFSET(0x169DBD80)
#define BBKIHHGEOEN_KOMKFOPFPJA_1_OFFSET UNITYSDK_OFFSET(0x169DC580)
#define BBKIHHGEOEN_KOMKFOPFPJA_OFFSET UNITYSDK_OFFSET(0x169DC2F0)
#define BBKIHHGEOEN_LIKCDAMANNL_OFFSET UNITYSDK_OFFSET(0x169DBF30)

inline static constexpr unsigned int BBKIHHGEOEN_TypeDefinitionIndex = 75316;

class BBKIHHGEOEN : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 GKEFLNPPPCA(::UnityEngine::Vector3 HHFEHGMFBMF)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BBKIHHGEOEN_GKEFLNPPPCA_OFFSET))(HHFEHGMFBMF);
	}

	static ::System::Single HJEMHNJDIJF(::System::Single OIMJAEFMNAA)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + BBKIHHGEOEN_HJEMHNJDIJF_OFFSET))(OIMJAEFMNAA);
	}

	static ::System::Single HGBBAHKMBMA(::UnityEngine::Vector3 PIHJNKPDKCM, ::UnityEngine::Vector3 PLCBNGBHCGB)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BBKIHHGEOEN_HGBBAHKMBMA_OFFSET))(PIHJNKPDKCM, PLCBNGBHCGB);
	}

	static ::System::Void LIKCDAMANNL(::UnityEngine::Vector3 DPCLFBHIPDM, ::UnityEngine::Vector3 IFNPKMCEPOC, ::Dest::Math::Box3& MFLCPGNIIAK)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Dest::Math::Box3&))((::PBYTE)hIl2Cpp + BBKIHHGEOEN_LIKCDAMANNL_OFFSET))(DPCLFBHIPDM, IFNPKMCEPOC, MFLCPGNIIAK);
	}

	static ::UnityEngine::Vector3 GKEFLNPPPCA_1(::System::Single HHFEHGMFBMF)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single))((::PBYTE)hIl2Cpp + BBKIHHGEOEN_GKEFLNPPPCA_1_OFFSET))(HHFEHGMFBMF);
	}

	static ::System::Single CGJOMMHGJAL(::UnityEngine::Vector3 OEMBGCNIOIL)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BBKIHHGEOEN_CGJOMMHGJAL_OFFSET))(OEMBGCNIOIL);
	}

	static ::UnityEngine::Quaternion KOMKFOPFPJA(::System::Single HHFEHGMFBMF)
	{
		return ((::UnityEngine::Quaternion(*)(::System::Single))((::PBYTE)hIl2Cpp + BBKIHHGEOEN_KOMKFOPFPJA_OFFSET))(HHFEHGMFBMF);
	}

	static ::UnityEngine::Quaternion KOMKFOPFPJA_1(::UnityEngine::Vector3 HHFEHGMFBMF)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BBKIHHGEOEN_KOMKFOPFPJA_1_OFFSET))(HHFEHGMFBMF);
	}

	static ::System::Single DDJDAHKLFLG(::UnityEngine::Quaternion POCFNHENHAM)
	{
		return ((::System::Single(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BBKIHHGEOEN_DDJDAHKLFLG_OFFSET))(POCFNHENHAM);
	}
};
