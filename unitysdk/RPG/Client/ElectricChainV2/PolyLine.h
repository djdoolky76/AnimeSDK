#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Line.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::ElectricChainV2 { class Shape; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD7ACA0)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_GET_LENGTHS_OFFSET UNITYSDK_OFFSET(0xCD7A550)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_LOICGIBKHMM_OFFSET UNITYSDK_OFFSET(0xCD7A140)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xCD7AAC0)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_PMPNGLKHFMJ_OFFSET UNITYSDK_OFFSET(0xCD7A9F0)
#define RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_SET_LENGTHS_OFFSET UNITYSDK_OFFSET(0xCD7AC90)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int PolyLine_TypeDefinitionIndex = 73601;

	class PolyLine : public ::RPG::Client::ElectricChainV2::Line
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElectricChainV2::Shape*>* polyPoints; // 0x20
		::System::Collections::Generic::List_1<::System::Single>* _lengths; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 LOICGIBKHMM(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_LOICGIBKHMM_OFFSET))(this, a1);
		}

		::System::Single PMPNGLKHFMJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_PMPNGLKHFMJ_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Single>* get_lengths()
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_GET_LENGTHS_OFFSET))(this);
		}

		::System::Void set_lengths(::System::Collections::Generic::List_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POLYLINE_SET_LENGTHS_OFFSET))(this, a1);
		}

	};
}
