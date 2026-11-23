#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/B3CC6E5519497EE3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/B89FB8E2D6457A45_AE8AB94952EED8E5.h"
#include "unitysdk/B89FB8E2D6457A45_E2FEEEC78A712BE4.h"
#include "unitysdk/B89FB8E2D6457A45_F2EA61B916E62D1F.h"
#include "unitysdk/B89FB8E2D6457A45_F93625C4FD11B785.h"
#include "unitysdk/UnityEngine/Splines/BezierKnot.h"

class B89FB8E2D6457A45_E66C5FACF38A60DE;
class F77C0B948299CD47;
namespace PampelGames::RoadConstructor { class ComponentSettings; }
namespace PampelGames::RoadConstructor { class IntersectionObject; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace PampelGames::RoadConstructor { class SceneObject; }
namespace PampelGames::RoadConstructor { class Traffic; }
namespace PampelGames::RoadConstructor { class TrafficLane; }
namespace PampelGames::RoadConstructor { class TrafficLaneEditor; }
namespace PampelGames::RoadConstructor { class TrafficLanePreset; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Splines { class Spline; }
namespace UnityEngine::Splines { class SplineContainer; }

#define B89FB8E2D6457A45_A02E9338292AEFB5_OFFSET UNITYSDK_OFFSET(0x3D7CA50)
#define B89FB8E2D6457A45_A5382D275E14EB7D_OFFSET UNITYSDK_OFFSET(0x3D80380)
#define B89FB8E2D6457A45_AB40F8B891C47E44_OFFSET UNITYSDK_OFFSET(0x3D7FB40)
#define B89FB8E2D6457A45_B1513AB2B58CCA6F_OFFSET UNITYSDK_OFFSET(0x3D80590)
#define B89FB8E2D6457A45_B934BAFB0429E646_OFFSET UNITYSDK_OFFSET(0x3D80A80)
#define B89FB8E2D6457A45_E93C19F6B357DE9C_OFFSET UNITYSDK_OFFSET(0x3D7CFB0)
#define B89FB8E2D6457A45_ECFE6E1175D2201C_OFFSET UNITYSDK_OFFSET(0x3D7FD20)
#define B89FB8E2D6457A45_EDD44B525A69C0AB_OFFSET UNITYSDK_OFFSET(0x3D80810)
#define B89FB8E2D6457A45_F973CFAD943ED60D_OFFSET UNITYSDK_OFFSET(0x3D7FF40)

inline static constexpr unsigned int B89FB8E2D6457A45_TypeDefinitionIndex = 18809;

class B89FB8E2D6457A45 : public ::System::Object
{
public:
	static ::System::Void A5382D275E14EB7D(::System::Int32 B48C66E5FB2449C6, ::B89FB8E2D6457A45_F2EA61B916E62D1F& param_1, ::B89FB8E2D6457A45_F93625C4FD11B785& param_2)
	{
		return ((::System::Void(*)(::System::Int32, ::B89FB8E2D6457A45_F2EA61B916E62D1F&, ::B89FB8E2D6457A45_F93625C4FD11B785&))((::PBYTE)hIl2Cpp + B89FB8E2D6457A45_A5382D275E14EB7D_OFFSET))(B48C66E5FB2449C6, param_1, param_2);
	}

	static ::System::Void B934BAFB0429E646(::B89FB8E2D6457A45_E66C5FACF38A60DE* ACE6A79F3A54DFB4, ::System::Int32 A18202F40DE7E90A, ::B89FB8E2D6457A45_E66C5FACF38A60DE* F10A3FF04BDB59EF, ::System::Boolean A6C99B30B67D921C, ::B89FB8E2D6457A45_F2EA61B916E62D1F& param_4)
	{
		return ((::System::Void(*)(::B89FB8E2D6457A45_E66C5FACF38A60DE*, ::System::Int32, ::B89FB8E2D6457A45_E66C5FACF38A60DE*, ::System::Boolean, ::B89FB8E2D6457A45_F2EA61B916E62D1F&))((::PBYTE)hIl2Cpp + B89FB8E2D6457A45_B934BAFB0429E646_OFFSET))(ACE6A79F3A54DFB4, A18202F40DE7E90A, F10A3FF04BDB59EF, A6C99B30B67D921C, param_4);
	}

	static ::System::Void A02E9338292AEFB5(::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF, ::PampelGames::RoadConstructor::SceneObject* F2F13BF43CD75E06, ::System::Boolean A7CF07598D6303D1)
	{
		return ((::System::Void(*)(::PampelGames::RoadConstructor::ComponentSettings*, ::PampelGames::RoadConstructor::SceneObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + B89FB8E2D6457A45_A02E9338292AEFB5_OFFSET))(B657584D50B81BBF, F2F13BF43CD75E06, A7CF07598D6303D1);
	}

	static ::PampelGames::RoadConstructor::RoadObject* AB40F8B891C47E44(::PampelGames::RoadConstructor::IntersectionObject* AED4E8B903CFBAFD, ::UnityEngine::Splines::BezierKnot BB4DB3113013548E)
	{
		return ((::PampelGames::RoadConstructor::RoadObject*(*)(::PampelGames::RoadConstructor::IntersectionObject*, ::UnityEngine::Splines::BezierKnot))((::PBYTE)hIl2Cpp + B89FB8E2D6457A45_AB40F8B891C47E44_OFFSET))(AED4E8B903CFBAFD, BB4DB3113013548E);
	}

	static ::System::Void E93C19F6B357DE9C(::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLaneEditor*>* A9F0EA64F4CB6AB5, ::UnityEngine::Splines::SplineContainer* B781AAD240788D8C, ::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline*>* FFD906F6C58D8F69, ::PampelGames::RoadConstructor::SceneObject* F2F13BF43CD75E06, ::PampelGames::RoadConstructor::Traffic* BFB48C4DFAB109A7)
	{
		return ((::System::Void(*)(::PampelGames::RoadConstructor::ComponentSettings*, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLaneEditor*>*, ::UnityEngine::Splines::SplineContainer*, ::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline*>*, ::PampelGames::RoadConstructor::SceneObject*, ::PampelGames::RoadConstructor::Traffic*))((::PBYTE)hIl2Cpp + B89FB8E2D6457A45_E93C19F6B357DE9C_OFFSET))(B657584D50B81BBF, A9F0EA64F4CB6AB5, B781AAD240788D8C, FFD906F6C58D8F69, F2F13BF43CD75E06, BFB48C4DFAB109A7);
	}

	static ::System::Boolean ECFE6E1175D2201C(::PampelGames::RoadConstructor::Traffic* BFB48C4DFAB109A7, ::UnityEngine::Splines::BezierKnot BB4DB3113013548E, ::B223EC95048EAAE0::B3CC6E5519497EE3 F04E814AC4A8897C, ::UnityEngine::Splines::BezierKnot& BC3A0858163A62FF)
	{
		return ((::System::Boolean(*)(::PampelGames::RoadConstructor::Traffic*, ::UnityEngine::Splines::BezierKnot, ::B223EC95048EAAE0::B3CC6E5519497EE3, ::UnityEngine::Splines::BezierKnot&))((::PBYTE)hIl2Cpp + B89FB8E2D6457A45_ECFE6E1175D2201C_OFFSET))(BFB48C4DFAB109A7, BB4DB3113013548E, F04E814AC4A8897C, BC3A0858163A62FF);
	}

	static ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>* B1513AB2B58CCA6F(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>* A087C4B223F24A76, ::System::Boolean AFAA9EEB5133E3E0, ::B89FB8E2D6457A45_AE8AB94952EED8E5& param_2, ::B89FB8E2D6457A45_E2FEEEC78A712BE4& param_3)
	{
		return ((::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>*(*)(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>*, ::System::Boolean, ::B89FB8E2D6457A45_AE8AB94952EED8E5&, ::B89FB8E2D6457A45_E2FEEEC78A712BE4&))((::PBYTE)hIl2Cpp + B89FB8E2D6457A45_B1513AB2B58CCA6F_OFFSET))(A087C4B223F24A76, AFAA9EEB5133E3E0, param_2, param_3);
	}

	static ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLaneEditor*>* F973CFAD943ED60D(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLanePreset*>* A5115B883BBCE02C, ::F77C0B948299CD47* EC442B0F96180C55)
	{
		return ((::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLaneEditor*>*(*)(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLanePreset*>*, ::F77C0B948299CD47*))((::PBYTE)hIl2Cpp + B89FB8E2D6457A45_F973CFAD943ED60D_OFFSET))(A5115B883BBCE02C, EC442B0F96180C55);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>* EDD44B525A69C0AB(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>* A087C4B223F24A76, ::B89FB8E2D6457A45_AE8AB94952EED8E5& param_1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>*(*)(::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>*, ::B89FB8E2D6457A45_AE8AB94952EED8E5&))((::PBYTE)hIl2Cpp + B89FB8E2D6457A45_EDD44B525A69C0AB_OFFSET))(A087C4B223F24A76, param_1);
	}
};
