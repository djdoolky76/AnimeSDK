#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NEFDNOMJMNF;
namespace System { class String; }

#define JFANJBIGOIH_AKMFMDLNFNO_OFFSET UNITYSDK_OFFSET(0x16644300)
#define JFANJBIGOIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x16645440)
#define JFANJBIGOIH_CMIFGDHBADM_OFFSET UNITYSDK_OFFSET(0x16644D30)
#define JFANJBIGOIH_CTOR_OFFSET UNITYSDK_OFFSET(0x16645430)
#define JFANJBIGOIH_DAJHMFNJALD_OFFSET UNITYSDK_OFFSET(0x16644BE0)
#define JFANJBIGOIH_EBKOAAPDLOD_OFFSET UNITYSDK_OFFSET(0x16643D70)
#define JFANJBIGOIH_EPKFPLJPBBL_OFFSET UNITYSDK_OFFSET(0x166440F0)
#define JFANJBIGOIH_FBEHHNIJDEM_OFFSET UNITYSDK_OFFSET(0x16645010)
#define JFANJBIGOIH_GLHNIPKGFNK_OFFSET UNITYSDK_OFFSET(0x16644A90)
#define JFANJBIGOIH_GPJHGLDLDDK_OFFSET UNITYSDK_OFFSET(0x16644720)
#define JFANJBIGOIH_ICDGPECDPFO_OFFSET UNITYSDK_OFFSET(0x16643DE0)
#define JFANJBIGOIH_JECMGGDLMKP_1_OFFSET UNITYSDK_OFFSET(0x166451A0)
#define JFANJBIGOIH_JECMGGDLMKP_2_OFFSET UNITYSDK_OFFSET(0x16645210)
#define JFANJBIGOIH_JECMGGDLMKP_3_OFFSET UNITYSDK_OFFSET(0x166452A0)
#define JFANJBIGOIH_JECMGGDLMKP_4_OFFSET UNITYSDK_OFFSET(0x16645320)
#define JFANJBIGOIH_JECMGGDLMKP_OFFSET UNITYSDK_OFFSET(0x16645140)
#define JFANJBIGOIH_KEKIMFFABIL_OFFSET UNITYSDK_OFFSET(0x16644E90)
#define JFANJBIGOIH_MEBPCCPOMHK_1_OFFSET UNITYSDK_OFFSET(0x16644920)
#define JFANJBIGOIH_MEBPCCPOMHK_2_OFFSET UNITYSDK_OFFSET(0x166449D0)
#define JFANJBIGOIH_MEBPCCPOMHK_OFFSET UNITYSDK_OFFSET(0x16643E60)
#define JFANJBIGOIH_OKMBMFFLBOB_OFFSET UNITYSDK_OFFSET(0x166444E0)
#define JFANJBIGOIH_PGGHKKPBOAI_OFFSET UNITYSDK_OFFSET(0x16644F00)

inline static constexpr unsigned int JFANJBIGOIH_TypeDefinitionIndex = 59046;

	class JFANJBIGOIH : public ::System::Object
	{
	public:
		static ::System::Guid* StaticGet_ALCCFEHEOBN()
		{
			return (::System::Guid*)UnitySDK::FromName("", "JFANJBIGOIH")->GetStaticField(0x2870);
		}

		static ::System::Single* StaticGet_LCHEBJKNFNF()
		{
			return (::System::Single*)UnitySDK::FromName("", "JFANJBIGOIH")->GetStaticField(0x2880);
		}

		static ::RPG::MVector3* StaticGet_EMHOCDLFGBN()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "JFANJBIGOIH")->GetStaticField(0x2884);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_FCBKCMLGIPE()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("", "JFANJBIGOIH")->GetStaticField(0x2890);
		}

		// static const ::System::Object GONCEDKMGHL; // 0x0
		// static const ::System::Object EIDOMHIFKOO; // 0x0
		// static const ::System::Object CDOPHDAPPLA; // 0x0
		// static const ::System::Object DJHCLLNEDCD; // 0x0
		// static const ::System::Object AHNBFLBAKAB; // 0x0
		// static const ::System::Object CEEJAIIGGJF; // 0x0
		// static const ::System::Object BNDPCOLGNCE; // 0x0
		// static const ::System::Object LHBCGDOJIHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFANJBIGOIH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFANJBIGOIH_CCTOR_OFFSET))();
		}

		static ::System::Boolean EBKOAAPDLOD(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + JFANJBIGOIH_EBKOAAPDLOD_OFFSET))(a1);
		}

		static ::System::Boolean ICDGPECDPFO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JFANJBIGOIH_ICDGPECDPFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean MEBPCCPOMHK(::RPG::GameCore::CompareType a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + JFANJBIGOIH_MEBPCCPOMHK_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::GameCore::FixPoint EPKFPLJPBBL(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JFANJBIGOIH_EPKFPLJPBBL_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint AKMFMDLNFNO(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JFANJBIGOIH_AKMFMDLNFNO_OFFSET))(a1);
		}

		static ::System::Int64 OKMBMFFLBOB(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JFANJBIGOIH_OKMBMFFLBOB_OFFSET))(a1);
		}

		static ::System::Int64 GPJHGLDLDDK(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int64(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JFANJBIGOIH_GPJHGLDLDDK_OFFSET))(a1);
		}

		static ::System::Boolean MEBPCCPOMHK_1(::RPG::GameCore::CompareType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JFANJBIGOIH_MEBPCCPOMHK_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MEBPCCPOMHK_2(::RPG::GameCore::CompareType a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + JFANJBIGOIH_MEBPCCPOMHK_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 GLHNIPKGFNK(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JFANJBIGOIH_GLHNIPKGFNK_OFFSET))(a1);
		}

		static ::System::Int32 DAJHMFNJALD(::Il2CppArray<::RPG::GameCore::FixPoint>* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JFANJBIGOIH_DAJHMFNJALD_OFFSET))(a1, a2);
		}

		static ::System::UInt32 CMIFGDHBADM(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JFANJBIGOIH_CMIFGDHBADM_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint KEKIMFFABIL(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JFANJBIGOIH_KEKIMFFABIL_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint PGGHKKPBOAI(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JFANJBIGOIH_PGGHKKPBOAI_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint FBEHHNIJDEM(::RPG::GameCore::NumOperationType a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::NumOperationType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JFANJBIGOIH_FBEHHNIJDEM_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 JECMGGDLMKP(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JFANJBIGOIH_JECMGGDLMKP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single JECMGGDLMKP_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JFANJBIGOIH_JECMGGDLMKP_1_OFFSET))(a1, a2);
		}

		static ::System::Single JECMGGDLMKP_2(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JFANJBIGOIH_JECMGGDLMKP_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Single JECMGGDLMKP_3(::NEFDNOMJMNF* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::NEFDNOMJMNF*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JFANJBIGOIH_JECMGGDLMKP_3_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 JECMGGDLMKP_4(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JFANJBIGOIH_JECMGGDLMKP_4_OFFSET))(a1, a2, a3);
		}

	};
