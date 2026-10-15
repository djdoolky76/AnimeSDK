#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FEGCOEBBCCC;
namespace BansheeGz::BGSpline::Curve { class BGCurvePoint; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JFNGFOKCEDA_AIAOLILCOOM_OFFSET UNITYSDK_OFFSET(0x1665A030)
#define JFNGFOKCEDA_BOLLONBJHLE_OFFSET UNITYSDK_OFFSET(0x16659BF0)
#define JFNGFOKCEDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1665AEC0)
#define JFNGFOKCEDA_CNNHJEPALLI_OFFSET UNITYSDK_OFFSET(0x16657D50)
#define JFNGFOKCEDA_CTOR_OFFSET UNITYSDK_OFFSET(0x166576E0)
#define JFNGFOKCEDA_DNBKGJPGEEC_OFFSET UNITYSDK_OFFSET(0x1665A780)
#define JFNGFOKCEDA_ECFEIIGEIDP_OFFSET UNITYSDK_OFFSET(0x16658350)
#define JFNGFOKCEDA_ECHFJMKBEDP_OFFSET UNITYSDK_OFFSET(0x1665A8B0)
#define JFNGFOKCEDA_EFHFJKHKECL_OFFSET UNITYSDK_OFFSET(0x16659410)
#define JFNGFOKCEDA_FGPKFFAGPIH_OFFSET UNITYSDK_OFFSET(0x16658ED0)
#define JFNGFOKCEDA_GCPINDPIIKB_OFFSET UNITYSDK_OFFSET(0x1665ACB0)
#define JFNGFOKCEDA_HJPEGIKKEDD_OFFSET UNITYSDK_OFFSET(0x16657CC0)
#define JFNGFOKCEDA_JBFFMEENCDG_OFFSET UNITYSDK_OFFSET(0x1665A4F0)

	class JFNGFOKCEDA : public ::System::Object
	{
	public:
		::FEGCOEBBCCC* IFPBIHEFOBN; // 0x10
		::System::Single ALDHNEADDBL; // 0x18
		static ::System::Int32* StaticGet_DOGCPKEDCPD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JFNGFOKCEDA")->GetStaticField(0x2D00);
		}

		static ::System::Int32* StaticGet_AHDCEJGBNNO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JFNGFOKCEDA")->GetStaticField(0x2D04);
		}

		static ::System::Int32* StaticGet_HBEFIMAAJHD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JFNGFOKCEDA")->GetStaticField(0x2D08);
		}

		::System::Void _ctor(::FEGCOEBBCCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEGCOEBBCCC*))((::PBYTE)hIl2Cpp + JFNGFOKCEDA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFNGFOKCEDA_CCTOR_OFFSET))();
		}

		::System::Void HJPEGIKKEDD(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + JFNGFOKCEDA_HJPEGIKKEDD_OFFSET))(this, a1, a2);
		}

		::System::Void FGPKFFAGPIH(::UnityEngine::Color a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + JFNGFOKCEDA_FGPKFFAGPIH_OFFSET))(this, a1, a2);
		}

		::System::Void EFHFJKHKECL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFNGFOKCEDA_EFHFJKHKECL_OFFSET))(this, a1);
		}

		::System::Void BOLLONBJHLE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JFNGFOKCEDA_BOLLONBJHLE_OFFSET))(this, a1);
		}

		::System::Void AIAOLILCOOM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JFNGFOKCEDA_AIAOLILCOOM_OFFSET))(this, a1);
		}

		::System::Void JBFFMEENCDG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JFNGFOKCEDA_JBFFMEENCDG_OFFSET))(this, a1);
		}

		::System::Boolean CNNHJEPALLI(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + JFNGFOKCEDA_CNNHJEPALLI_OFFSET))(this, a1, a2);
		}

		::System::Void DNBKGJPGEEC(::System::Object* a1, ::System::EventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JFNGFOKCEDA_DNBKGJPGEEC_OFFSET))(this, a1, a2);
		}

		::System::Void ECFEIIGEIDP(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + JFNGFOKCEDA_ECFEIIGEIDP_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePoint* GCPINDPIIKB(::UnityEngine::Vector3 a1)
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePoint*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JFNGFOKCEDA_GCPINDPIIKB_OFFSET))(this, a1);
		}

		::System::Void ECHFJMKBEDP(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + JFNGFOKCEDA_ECHFJMKBEDP_OFFSET))(this, a1);
		}

	};
