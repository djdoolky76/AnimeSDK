#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EBLHIMCKJIJ;
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LHJIFCEDHAP_NDCJAJHGHCO_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB6AE590)
#define LHJIFCEDHAP_NDCJAJHGHCO_AGPNFLLLDIN_OFFSET UNITYSDK_OFFSET(0xB6AF4D0)
#define LHJIFCEDHAP_NDCJAJHGHCO_CTOR_OFFSET UNITYSDK_OFFSET(0xB6AFDD0)
#define LHJIFCEDHAP_NDCJAJHGHCO_DLAILGNMFGI_1_OFFSET UNITYSDK_OFFSET(0xB6AF960)
#define LHJIFCEDHAP_NDCJAJHGHCO_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xB6AEBA0)
#define LHJIFCEDHAP_NDCJAJHGHCO_GET_CURVEROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0xB6AFDB0)
#define LHJIFCEDHAP_NDCJAJHGHCO_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB6AFD00)
#define LHJIFCEDHAP_NDCJAJHGHCO_IBHOAEDDDMH_OFFSET UNITYSDK_OFFSET(0xB6AFD40)
#define LHJIFCEDHAP_NDCJAJHGHCO_KCAOCLBDAMN_OFFSET UNITYSDK_OFFSET(0xB6AEED0)
#define LHJIFCEDHAP_NDCJAJHGHCO_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xB6AE580)
#define LHJIFCEDHAP_NDCJAJHGHCO_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB6AEFC0)
#define LHJIFCEDHAP_NDCJAJHGHCO_MKOKGDHCGBD_OFFSET UNITYSDK_OFFSET(0xB6AEEF0)
#define LHJIFCEDHAP_NDCJAJHGHCO_NLDKNODEPOG_OFFSET UNITYSDK_OFFSET(0xB6AEEE0)
#define LHJIFCEDHAP_NDCJAJHGHCO_SET_CURVEROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0xB6AFDC0)
#define LHJIFCEDHAP_NDCJAJHGHCO_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6AEF50)

inline static constexpr unsigned int LHJIFCEDHAP_NDCJAJHGHCO_TypeDefinitionIndex = 58318;

	class LHJIFCEDHAP_NDCJAJHGHCO : public ::System::Object
	{
	public:
		::EBLHIMCKJIJ* FLMODBLFAGD; // 0x10
		::System::Action_1<::System::Boolean>* MPKAFEJFNKN; // 0x18
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x20
		::System::Boolean GDCEFHNJLNF; // 0x28
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 MIBIDIDMNBH; // 0x2C
		::UnityEngine::Vector3 BEDPGAOCOHG; // 0x38
		::UnityEngine::Quaternion JFOOIDONIML; // 0x44
		::System::Single NPINECOCALC; // 0x54
		::System::Single HBDJCFFDGDD; // 0x58
		::UnityEngine::Quaternion _CurveRotationOffset_k__BackingField; // 0x5C
		::UnityEngine::Quaternion MGFPKGIOKEN; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_CTOR_OFFSET))(this);
		}

		::EBLHIMCKJIJ* KCAOCLBDAMN()
		{
			return ((::EBLHIMCKJIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_KCAOCLBDAMN_OFFSET))(this);
		}

		::System::Void NLDKNODEPOG(::EBLHIMCKJIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBLHIMCKJIJ*))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_NLDKNODEPOG_OFFSET))(this, a1);
		}

		::System::Single MKOKGDHCGBD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_MKOKGDHCGBD_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void DLAILGNMFGI(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Action_1<::System::Boolean>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_DLAILGNMFGI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void DLAILGNMFGI_1(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Action_1<::System::Boolean>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_DLAILGNMFGI_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void AGPNFLLLDIN(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Action_1<::System::Boolean>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_AGPNFLLLDIN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void IBHOAEDDDMH(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_IBHOAEDDDMH_OFFSET))(this, a1, a2);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_LDAMHBBILAD_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_CurveRotationOffset()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_GET_CURVEROTATIONOFFSET_OFFSET))(this);
		}

		::System::Void set_CurveRotationOffset(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_NDCJAJHGHCO_SET_CURVEROTATIONOFFSET_OFFSET))(this, a1);
		}

	};
