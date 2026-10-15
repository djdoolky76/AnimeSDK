#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/System/Nullable_1.h"
class CADDDIKDHBJ;
class PNEMLMAGOMM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MHGKEGBGANO_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB92F280)
#define MHGKEGBGANO_ALNAEEDEENP_OFFSET UNITYSDK_OFFSET(0xB92E950)
#define MHGKEGBGANO_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0xB92EFE0)
#define MHGKEGBGANO_CPNEJKCDNLI_OFFSET UNITYSDK_OFFSET(0xB92E5B0)
#define MHGKEGBGANO_CTOR_OFFSET UNITYSDK_OFFSET(0xB92F2D0)
#define MHGKEGBGANO_DBPCFPAGDPP_OFFSET UNITYSDK_OFFSET(0xB92EA40)
#define MHGKEGBGANO_ENLAABJMNPI_OFFSET UNITYSDK_OFFSET(0xB92E570)
#define MHGKEGBGANO_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xB92EFC0)
#define MHGKEGBGANO_GKCJPBGDDFK_OFFSET UNITYSDK_OFFSET(0xB92EB60)
#define MHGKEGBGANO_IIOLBDCLOBC_OFFSET UNITYSDK_OFFSET(0xB92E690)
#define MHGKEGBGANO_IOJLFCLBDEL_OFFSET UNITYSDK_OFFSET(0xB92EE80)
#define MHGKEGBGANO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB92E9E0)
#define MHGKEGBGANO_KKGIDBBNMIP_OFFSET UNITYSDK_OFFSET(0xB92EDA0)
#define MHGKEGBGANO_KOBNBLHDEMH_OFFSET UNITYSDK_OFFSET(0xB92ED50)
#define MHGKEGBGANO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB92F230)
#define MHGKEGBGANO_LFEAJOLCCNI_OFFSET UNITYSDK_OFFSET(0xB92EED0)
#define MHGKEGBGANO_LJCHHCFDDED_OFFSET UNITYSDK_OFFSET(0xB92E7D0)
#define MHGKEGBGANO_LKHEJLJAHBI_OFFSET UNITYSDK_OFFSET(0xB92E7C0)
#define MHGKEGBGANO_NECOPLLIIAM_OFFSET UNITYSDK_OFFSET(0xB92EC20)
#define MHGKEGBGANO_NKMPPIDGFJF_OFFSET UNITYSDK_OFFSET(0xB92E820)
#define MHGKEGBGANO_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0xB92F070)
#define MHGKEGBGANO_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0xB92F020)
#define MHGKEGBGANO_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0xB92EFD0)

inline static constexpr unsigned int MHGKEGBGANO_TypeDefinitionIndex = 49565;

	class MHGKEGBGANO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PNEMLMAGOMM*>* DAOGCNIBHIL; // 0x10
		::UnityEngine::AnimationCurve* _mappingCurve; // 0x18
		::System::String* _fmChannelName; // 0x20
		::CADDDIKDHBJ* _OwnerFMSystem_k__BackingField; // 0x28
		::UnityEngine::Vector2 _outputRange; // 0x30
		::System::Single LLICGDGPMJL; // 0x38
		::System::Single _fmSampleDelay; // 0x3C
		::UnityEngine::Vector2 _inputRange; // 0x40
		::System::Boolean AECPKJBMMED; // 0x48
		::System::Boolean _enableFMControl; // 0x49
		::System::Boolean DIHHHPECEFM; // 0x4A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_CTOR_OFFSET))(this);
		}

		::EnviromentSystemV2Space::EnvCallbackCurveType ENLAABJMNPI()
		{
			return ((::EnviromentSystemV2Space::EnvCallbackCurveType(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_ENLAABJMNPI_OFFSET))(this);
		}

		::System::Void CPNEJKCDNLI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MHGKEGBGANO_CPNEJKCDNLI_OFFSET))(this, a1);
		}

		::System::Single LKHEJLJAHBI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_LKHEJLJAHBI_OFFSET))(this);
		}

		::System::Int32 LJCHHCFDDED()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_LJCHHCFDDED_OFFSET))(this);
		}

		::System::Void NKMPPIDGFJF(::PNEMLMAGOMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNEMLMAGOMM*))((::PBYTE)hIl2Cpp + MHGKEGBGANO_NKMPPIDGFJF_OFFSET))(this, a1);
		}

		::System::Void ALNAEEDEENP(::PNEMLMAGOMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNEMLMAGOMM*))((::PBYTE)hIl2Cpp + MHGKEGBGANO_ALNAEEDEENP_OFFSET))(this, a1);
		}

		::System::Void IIOLBDCLOBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_IIOLBDCLOBC_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MHGKEGBGANO_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GKCJPBGDDFK(::System::String* a1, ::System::Nullable_1<::UnityEngine::Vector2> a2, ::System::Nullable_1<::UnityEngine::Vector2> a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector2>, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + MHGKEGBGANO_GKCJPBGDDFK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KOBNBLHDEMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_KOBNBLHDEMH_OFFSET))(this);
		}

		::System::Void IOJLFCLBDEL(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MHGKEGBGANO_IOJLFCLBDEL_OFFSET))(this, a1);
		}

		::System::Void NECOPLLIIAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_NECOPLLIIAM_OFFSET))(this);
		}

		::System::Void DBPCFPAGDPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_DBPCFPAGDPP_OFFSET))(this);
		}

		::System::Void KKGIDBBNMIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_KKGIDBBNMIP_OFFSET))(this);
		}

		::System::Single LFEAJOLCCNI(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MHGKEGBGANO_LFEAJOLCCNI_OFFSET))(this, a1);
		}

		::CADDDIKDHBJ* get_OwnerFMSystem()
		{
			return ((::CADDDIKDHBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_GET_OWNERFMSYSTEM_OFFSET))(this);
		}

		::System::Void set_OwnerFMSystem(::CADDDIKDHBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CADDDIKDHBJ*))((::PBYTE)hIl2Cpp + MHGKEGBGANO_SET_OWNERFMSYSTEM_OFFSET))(this, a1);
		}

		::System::String* ChannelName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_CHANNELNAME_OFFSET))(this);
		}

		::System::Single SampleDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_SAMPLEDELAY_OFFSET))(this);
		}

		::System::Void OnSample(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MHGKEGBGANO_ONSAMPLE_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGKEGBGANO_ABKBOGIGAEH_OFFSET))(this);
		}

	};
