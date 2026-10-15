#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Object; }

#define MLLBMBEIAAB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9B6CA0)
#define MLLBMBEIAAB_CJEHEGCIPEI_OFFSET UNITYSDK_OFFSET(0xB9B7940)
#define MLLBMBEIAAB_COEGMANAPMH_OFFSET UNITYSDK_OFFSET(0xB9B7640)
#define MLLBMBEIAAB_DBLGGMAKPAN_OFFSET UNITYSDK_OFFSET(0xB9B6C10)
#define MLLBMBEIAAB_DNLBJCEIIKD_OFFSET UNITYSDK_OFFSET(0xB9B7270)
#define MLLBMBEIAAB_FBFKNPNNFMA_OFFSET UNITYSDK_OFFSET(0xB9B7A20)
#define MLLBMBEIAAB_HBGPFEKCEBO_OFFSET UNITYSDK_OFFSET(0xB9B6C70)
#define MLLBMBEIAAB_HGOCMNGFGHM_OFFSET UNITYSDK_OFFSET(0xB9B6C40)
#define MLLBMBEIAAB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB9B6E10)
#define MLLBMBEIAAB_LBPMGNJELMI_OFFSET UNITYSDK_OFFSET(0xB9B7830)

inline static constexpr unsigned int MLLBMBEIAAB_TypeDefinitionIndex = 49172;

	class MLLBMBEIAAB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_NILAHIDKPLD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "MLLBMBEIAAB")->GetStaticField(0xBD50);
		}

		static ::System::Collections::Generic::Queue_1<::System::Int32>** StaticGet_NCANFFGFJFK()
		{
			return (::System::Collections::Generic::Queue_1<::System::Int32>**)UnitySDK::FromName("", "MLLBMBEIAAB")->GetStaticField(0xBD58);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_FOAEINPDJEI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>**)UnitySDK::FromName("", "MLLBMBEIAAB")->GetStaticField(0xBD60);
		}

		static ::System::Int32* StaticGet_NOOOMLAMJKA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MLLBMBEIAAB")->GetStaticField(0x2970);
		}

		static ::System::Int32* StaticGet_PFMHLJPBNDP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MLLBMBEIAAB")->GetStaticField(0x2974);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLLBMBEIAAB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>* DBLGGMAKPAN()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>*(*)())((::PBYTE)hIl2Cpp + MLLBMBEIAAB_DBLGGMAKPAN_OFFSET))();
		}

		static ::System::Int32 HGOCMNGFGHM()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MLLBMBEIAAB_HGOCMNGFGHM_OFFSET))();
		}

		static ::System::Collections::Generic::Queue_1<::System::Int32>* HBGPFEKCEBO()
		{
			return ((::System::Collections::Generic::Queue_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + MLLBMBEIAAB_HBGPFEKCEBO_OFFSET))();
		}

		static ::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLLBMBEIAAB_KHGIKBFDLFB_OFFSET))();
		}

		static ::System::Void DNLBJCEIIKD(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MLLBMBEIAAB_DNLBJCEIIKD_OFFSET))(a1);
		}

		static ::System::Void COEGMANAPMH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MLLBMBEIAAB_COEGMANAPMH_OFFSET))(a1);
		}

		static ::System::Void LBPMGNJELMI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MLLBMBEIAAB_LBPMGNJELMI_OFFSET))(a1);
		}

		static ::System::Int32 CJEHEGCIPEI()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MLLBMBEIAAB_CJEHEGCIPEI_OFFSET))();
		}

		static ::System::Void FBFKNPNNFMA(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::Object*>*>* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action_1<::System::Collections::Generic::List_1<::UnityEngine::Object*>*>*))((::PBYTE)hIl2Cpp + MLLBMBEIAAB_FBFKNPNNFMA_OFFSET))(a1, a2, a3);
		}

	};
