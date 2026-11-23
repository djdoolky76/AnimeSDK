#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FE2D2EC286587905_EA76EC050E0392B3.h"
#include "unitysdk/Unity/Mathematics/float3.h"

class F77C0B948299CD47;
namespace PampelGames::RoadConstructor { class ComponentSettings; }
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace PampelGames::RoadConstructor { class RoundaboutObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Splines { class Spline; }

#define FE2D2EC286587905_AF74C459B594A750_OFFSET UNITYSDK_OFFSET(0x3D75560)
#define FE2D2EC286587905_B64186CA79366D90_OFFSET UNITYSDK_OFFSET(0x3D776A0)
#define FE2D2EC286587905_E80292BF89EB743C_OFFSET UNITYSDK_OFFSET(0x3D76E70)

inline static constexpr unsigned int FE2D2EC286587905_TypeDefinitionIndex = 18802;

class FE2D2EC286587905 : public ::System::Object
{
public:
	static ::System::Void AF74C459B594A750(::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF, ::F77C0B948299CD47* F399E3CBFECFAFC7, ::Unity::Mathematics::float3 EFE18FFF0DED2011, ::System::Single F0CEBBB186782829, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>* EF3EFFB3796080F4, ::Il2CppArray<::UnityEngine::Material*>*& B1611F2592C6F429, ::UnityEngine::Mesh*& E311E752730684B8, ::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline*>*& EBA53A1BBBA5E0E6, ::UnityEngine::Splines::Spline*& EBA307764F55CCA7, ::System::Single F755931F13A26DB3)
	{
		return ((::System::Void(*)(::PampelGames::RoadConstructor::ComponentSettings*, ::F77C0B948299CD47*, ::Unity::Mathematics::float3, ::System::Single, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*, ::Il2CppArray<::UnityEngine::Material*>*&, ::UnityEngine::Mesh*&, ::System::Collections::Generic::List_1<::UnityEngine::Splines::Spline*>*&, ::UnityEngine::Splines::Spline*&, ::System::Single))((::PBYTE)hIl2Cpp + FE2D2EC286587905_AF74C459B594A750_OFFSET))(B657584D50B81BBF, F399E3CBFECFAFC7, EFE18FFF0DED2011, F0CEBBB186782829, EF3EFFB3796080F4, B1611F2592C6F429, E311E752730684B8, EBA53A1BBBA5E0E6, EBA307764F55CCA7, F755931F13A26DB3);
	}

	static ::System::Void B64186CA79366D90(::System::Single EDC428AAD26DC346, ::System::Single F3A57A28C8BD56F8, ::FE2D2EC286587905_EA76EC050E0392B3& param_2)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single, ::FE2D2EC286587905_EA76EC050E0392B3&))((::PBYTE)hIl2Cpp + FE2D2EC286587905_B64186CA79366D90_OFFSET))(EDC428AAD26DC346, F3A57A28C8BD56F8, param_2);
	}

	static ::System::Void E80292BF89EB743C(::PampelGames::RoadConstructor::ComponentSettings* B657584D50B81BBF, ::F77C0B948299CD47* EC442B0F96180C55, ::Unity::Mathematics::float3 EB211B01816ACA79, ::System::Single F0CEBBB186782829, ::PampelGames::RoadConstructor::RoundaboutObject*& FF53DACA74AECE42, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*& A596B5649374478A, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*& E3FFEC1FA07C7786, ::System::Boolean A426B35D5CC78F1D, ::PampelGames::RoadConstructor::RoundaboutObject* FD1D5BF648111E99, ::PampelGames::RoadConstructor::RoadObject* B53D9FA4D4836DFD)
	{
		return ((::System::Void(*)(::PampelGames::RoadConstructor::ComponentSettings*, ::F77C0B948299CD47*, ::Unity::Mathematics::float3, ::System::Single, ::PampelGames::RoadConstructor::RoundaboutObject*&, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*&, ::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::RoadObject*>*&, ::System::Boolean, ::PampelGames::RoadConstructor::RoundaboutObject*, ::PampelGames::RoadConstructor::RoadObject*))((::PBYTE)hIl2Cpp + FE2D2EC286587905_E80292BF89EB743C_OFFSET))(B657584D50B81BBF, EC442B0F96180C55, EB211B01816ACA79, F0CEBBB186782829, FF53DACA74AECE42, A596B5649374478A, E3FFEC1FA07C7786, A426B35D5CC78F1D, FD1D5BF648111E99, B53D9FA4D4836DFD);
	}
};
