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

#define MHGKEGBGANO_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x1B355B00)
#define MHGKEGBGANO_ALNAEEDEENP_OFFSET UNITYSDK_OFFSET(0x1B3551D0)
#define MHGKEGBGANO_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x1B355860)
#define MHGKEGBGANO_CPNEJKCDNLI_OFFSET UNITYSDK_OFFSET(0x1B354E30)
#define MHGKEGBGANO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B355B50)
#define MHGKEGBGANO_DBPCFPAGDPP_OFFSET UNITYSDK_OFFSET(0x1B3552C0)
#define MHGKEGBGANO_ENLAABJMNPI_OFFSET UNITYSDK_OFFSET(0x1B354DF0)
#define MHGKEGBGANO_GET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x1B355840)
#define MHGKEGBGANO_GKCJPBGDDFK_OFFSET UNITYSDK_OFFSET(0x1B3553E0)
#define MHGKEGBGANO_IIOLBDCLOBC_OFFSET UNITYSDK_OFFSET(0x1B354F10)
#define MHGKEGBGANO_IOJLFCLBDEL_OFFSET UNITYSDK_OFFSET(0x1B355700)
#define MHGKEGBGANO_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B355260)
#define MHGKEGBGANO_KKGIDBBNMIP_OFFSET UNITYSDK_OFFSET(0x1B355620)
#define MHGKEGBGANO_KOBNBLHDEMH_OFFSET UNITYSDK_OFFSET(0x1B3555D0)
#define MHGKEGBGANO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B355AB0)
#define MHGKEGBGANO_LFEAJOLCCNI_OFFSET UNITYSDK_OFFSET(0x1B355750)
#define MHGKEGBGANO_LJCHHCFDDED_OFFSET UNITYSDK_OFFSET(0x1B355050)
#define MHGKEGBGANO_LKHEJLJAHBI_OFFSET UNITYSDK_OFFSET(0x1B355040)
#define MHGKEGBGANO_NECOPLLIIAM_OFFSET UNITYSDK_OFFSET(0x1B3554A0)
#define MHGKEGBGANO_NKMPPIDGFJF_OFFSET UNITYSDK_OFFSET(0x1B3550A0)
#define MHGKEGBGANO_ONSAMPLE_OFFSET UNITYSDK_OFFSET(0x1B3558F0)
#define MHGKEGBGANO_SAMPLEDELAY_OFFSET UNITYSDK_OFFSET(0x1B3558A0)
#define MHGKEGBGANO_SET_OWNERFMSYSTEM_OFFSET UNITYSDK_OFFSET(0x1B355850)

inline static constexpr unsigned int MHGKEGBGANO_TypeDefinitionIndex = 50641;

	class MHGKEGBGANO : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* _mappingCurve; // 0x10
		::CADDDIKDHBJ* _OwnerFMSystem_k__BackingField; // 0x18
		::System::String* _fmChannelName; // 0x20
		::System::Collections::Generic::List_1<::PNEMLMAGOMM*>* DAOGCNIBHIL; // 0x28
		::System::Boolean AECPKJBMMED; // 0x30
		::System::Boolean _enableFMControl; // 0x31
		::System::Boolean DIHHHPECEFM; // 0x32
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector2 _outputRange; // 0x34
		::UnityEngine::Vector2 _inputRange; // 0x3C
		::System::Single LLICGDGPMJL; // 0x44
		::System::Single _fmSampleDelay; // 0x48
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
