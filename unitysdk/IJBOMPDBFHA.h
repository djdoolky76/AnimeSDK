#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DualQuaternion.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/HHNDDMAIBBC.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHull.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHullBuffer.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System { template <typename T> class Func_1; }

#define IJBOMPDBFHA_FONKDMODOLA_OFFSET UNITYSDK_OFFSET(0x804680)
#define IJBOMPDBFHA_IABEOOBELIK_OFFSET UNITYSDK_OFFSET(0x804240)
#define IJBOMPDBFHA_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x804210)
#define IJBOMPDBFHA_MGAJDANFEEP_OFFSET UNITYSDK_OFFSET(0x804490)
#define IJBOMPDBFHA_NLLOHFEDOFN_OFFSET UNITYSDK_OFFSET(0x804360)
#define IJBOMPDBFHA_OEDKENNLONA_1_OFFSET UNITYSDK_OFFSET(0x8045F0)
#define IJBOMPDBFHA_OEDKENNLONA_2_OFFSET UNITYSDK_OFFSET(0x804630)
#define IJBOMPDBFHA_OEDKENNLONA_OFFSET UNITYSDK_OFFSET(0x8041B0)
#define IJBOMPDBFHA_OIIOOIOMJNB_OFFSET UNITYSDK_OFFSET(0x612060)
#define IJBOMPDBFHA_OLEEPGLACAH_OFFSET UNITYSDK_OFFSET(0x612240)
#define IJBOMPDBFHA__CCTOR_OFFSET UNITYSDK_OFFSET(0x10150930)
#define IJBOMPDBFHA__CTOR_OFFSET UNITYSDK_OFFSET(0x611FC0)

inline static constexpr unsigned int IJBOMPDBFHA_TypeDefinitionIndex = 76036;

struct alignas(8) IJBOMPDBFHA
{
	static ::IJBOMPDBFHA* StaticGet_EFMCBKOMKIH()
	{
		return (::IJBOMPDBFHA*)Il2CppClass::FromTypeDefinitionIndex(IJBOMPDBFHA_TypeDefinitionIndex)->GetStaticField(0x3B650);
	}
	::HHNDDMAIBBC HDAAAFHFDGE; // 0x10
	::Foundation::Variable_1<::Foundation::DualQuaternion> ACDOKEGBJAO; // 0x50
	::System::Byte _padding0[0x30];
	::Foundation::Variable_1<::UnityEngine::Vector3> HHMPFIANODF; // 0x88
	::System::Byte _padding1[0x18];
	::Foundation::Variable_1<::UnityEngine::Vector3> FNNGCAFCBHJ; // 0xA8

	::System::Void _ctor(::HHNDDMAIBBC AGNLMKIFIEM, ::Foundation::Variable_1<::Foundation::DualQuaternion> GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::HHNDDMAIBBC, ::Foundation::Variable_1<::Foundation::DualQuaternion>))((::PBYTE)hIl2Cpp + IJBOMPDBFHA__CTOR_OFFSET))(this, AGNLMKIFIEM, GKBJOPJKCLB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJBOMPDBFHA__CCTOR_OFFSET))();
	}

	::Foundation::Geometry::ExtendConvexHull2D::ConvexHull OIIOOIOMJNB(::PipelineCamera::FinalCameraData KONLMDBCDCK, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer PMAMMGFJAJL)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::PVOID, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + IJBOMPDBFHA_OIIOOIOMJNB_OFFSET))(this, KONLMDBCDCK, PMAMMGFJAJL);
	}

	::UnityEngine::Vector3 OLEEPGLACAH()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBOMPDBFHA_OLEEPGLACAH_OFFSET))(this);
	}

	/*
	::IJBOMPDBFHA OEDKENNLONA(::UnityEngine::Vector3 OPMPKFEHOBM)
	{
		return ((::IJBOMPDBFHA(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IJBOMPDBFHA_OEDKENNLONA_OFFSET))(this, OPMPKFEHOBM);
	}
	*/

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBOMPDBFHA_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Boolean IABEOOBELIK(::UnityEngine::Vector3& INLIBFCBMLC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + IJBOMPDBFHA_IABEOOBELIK_OFFSET))(this, INLIBFCBMLC);
	}

	::UnityEngine::Bounds NLLOHFEDOFN()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBOMPDBFHA_NLLOHFEDOFN_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> MGAJDANFEEP(::PipelineCamera::FinalCameraData KONLMDBCDCK, ::System::Single EGCKEINKEPM, ::System::Boolean GKMGHMELHKE)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::PipelineCamera::FinalCameraData, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + IJBOMPDBFHA_MGAJDANFEEP_OFFSET))(this, KONLMDBCDCK, EGCKEINKEPM, GKMGHMELHKE);
	}

	/*
	::IJBOMPDBFHA OEDKENNLONA_1(::Foundation::Variable_1<::UnityEngine::Vector3> OPMPKFEHOBM)
	{
		return ((::IJBOMPDBFHA(*)(::PVOID, ::Foundation::Variable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + IJBOMPDBFHA_OEDKENNLONA_1_OFFSET))(this, OPMPKFEHOBM);
	}
	*/

	/*
	::IJBOMPDBFHA OEDKENNLONA_2(::System::Func_1<::UnityEngine::Vector3>* OPMPKFEHOBM)
	{
		return ((::IJBOMPDBFHA(*)(::PVOID, ::System::Func_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + IJBOMPDBFHA_OEDKENNLONA_2_OFFSET))(this, OPMPKFEHOBM);
	}
	*/

	/*
	::IJBOMPDBFHA FONKDMODOLA(::Foundation::Variable_1<::UnityEngine::Vector3> INLIBFCBMLC)
	{
		return ((::IJBOMPDBFHA(*)(::PVOID, ::Foundation::Variable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + IJBOMPDBFHA_FONKDMODOLA_OFFSET))(this, INLIBFCBMLC);
	}
	*/
};
