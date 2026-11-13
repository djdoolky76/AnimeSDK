#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Object; }

#define MLLBMBEIAAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B926780)
#define MLLBMBEIAAB_CJEHEGCIPEI_OFFSET UNITYSDK_OFFSET(0x1B9273B0)
#define MLLBMBEIAAB_COEGMANAPMH_OFFSET UNITYSDK_OFFSET(0x1B9270C0)
#define MLLBMBEIAAB_DBLGGMAKPAN_OFFSET UNITYSDK_OFFSET(0x1B9266F0)
#define MLLBMBEIAAB_DNLBJCEIIKD_OFFSET UNITYSDK_OFFSET(0x1B926D20)
#define MLLBMBEIAAB_FBFKNPNNFMA_OFFSET UNITYSDK_OFFSET(0x1B927490)
#define MLLBMBEIAAB_HBGPFEKCEBO_OFFSET UNITYSDK_OFFSET(0x1B926750)
#define MLLBMBEIAAB_HGOCMNGFGHM_OFFSET UNITYSDK_OFFSET(0x1B926720)
#define MLLBMBEIAAB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1B9268C0)
#define MLLBMBEIAAB_LBPMGNJELMI_OFFSET UNITYSDK_OFFSET(0x1B9272B0)

inline static constexpr unsigned int MLLBMBEIAAB_TypeDefinitionIndex = 50248;

	class MLLBMBEIAAB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Queue_1<::System::Int32>** StaticGet_NCANFFGFJFK()
		{
			return (::System::Collections::Generic::Queue_1<::System::Int32>**)UnitySDK::FromName("", "MLLBMBEIAAB")->GetStaticField(0x73B90);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_FOAEINPDJEI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>**)UnitySDK::FromName("", "MLLBMBEIAAB")->GetStaticField(0x73B98);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_NILAHIDKPLD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "MLLBMBEIAAB")->GetStaticField(0x73BA0);
		}

		static ::System::Int32* StaticGet_NOOOMLAMJKA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MLLBMBEIAAB")->GetStaticField(0x16400);
		}

		static ::System::Int32* StaticGet_PFMHLJPBNDP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MLLBMBEIAAB")->GetStaticField(0x16404);
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
