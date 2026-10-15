#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JDPHJJHMJAM_AGPJMHELCCC_OFFSET UNITYSDK_OFFSET(0x16611CE0)
#define JDPHJJHMJAM_ANEKJABBCJB_OFFSET UNITYSDK_OFFSET(0x16611360)
#define JDPHJJHMJAM_CHKIOCMDIFB_1_OFFSET UNITYSDK_OFFSET(0x16611910)
#define JDPHJJHMJAM_CHKIOCMDIFB_2_OFFSET UNITYSDK_OFFSET(0x166119F0)
#define JDPHJJHMJAM_CHKIOCMDIFB_3_OFFSET UNITYSDK_OFFSET(0x16611AE0)
#define JDPHJJHMJAM_CHKIOCMDIFB_4_OFFSET UNITYSDK_OFFSET(0x16611BD0)
#define JDPHJJHMJAM_CHKIOCMDIFB_OFFSET UNITYSDK_OFFSET(0x166117F0)
#define JDPHJJHMJAM_DKBCLCBBEOD_OFFSET UNITYSDK_OFFSET(0x16611450)
#define JDPHJJHMJAM_HLKCEHIMHKH_OFFSET UNITYSDK_OFFSET(0x16611710)
#define JDPHJJHMJAM_IFHKMIEENHN_OFFSET UNITYSDK_OFFSET(0x166114D0)
#define JDPHJJHMJAM_LAFBGNPCLPK_OFFSET UNITYSDK_OFFSET(0x16611D80)
#define JDPHJJHMJAM_LKIJOLOMEKA_OFFSET UNITYSDK_OFFSET(0x166118A0)
#define JDPHJJHMJAM_NHHNEMNIGAF_OFFSET UNITYSDK_OFFSET(0x166115B0)

	class JDPHJJHMJAM : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 ANEKJABBCJB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JDPHJJHMJAM_ANEKJABBCJB_OFFSET))(a1, a2);
		}

		static ::System::Single DKBCLCBBEOD(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JDPHJJHMJAM_DKBCLCBBEOD_OFFSET))(a1, a2);
		}

		static ::System::Single IFHKMIEENHN(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JDPHJJHMJAM_IFHKMIEENHN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 NHHNEMNIGAF(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JDPHJJHMJAM_NHHNEMNIGAF_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 HLKCEHIMHKH(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JDPHJJHMJAM_HLKCEHIMHKH_OFFSET))(a1);
		}

		static ::System::Single CHKIOCMDIFB(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + JDPHJJHMJAM_CHKIOCMDIFB_OFFSET))(a1);
		}

		static ::System::Single CHKIOCMDIFB_1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JDPHJJHMJAM_CHKIOCMDIFB_1_OFFSET))(a1);
		}

		static ::System::Single CHKIOCMDIFB_2(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JDPHJJHMJAM_CHKIOCMDIFB_2_OFFSET))(a1, a2);
		}

		static ::System::Single CHKIOCMDIFB_3(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JDPHJJHMJAM_CHKIOCMDIFB_3_OFFSET))(a1);
		}

		static ::System::Single CHKIOCMDIFB_4(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JDPHJJHMJAM_CHKIOCMDIFB_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LKIJOLOMEKA(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + JDPHJJHMJAM_LKIJOLOMEKA_OFFSET))(a1);
		}

		static ::System::Single AGPJMHELCCC()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + JDPHJJHMJAM_AGPJMHELCCC_OFFSET))();
		}

		static ::UnityEngine::Vector2 LAFBGNPCLPK()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + JDPHJJHMJAM_LAFBGNPCLPK_OFFSET))();
		}

	};
