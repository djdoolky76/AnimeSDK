#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A223860C50512B7D;
class AAE946DB9D3CB37B;
class BCA0E2700C819E81;
class F77C0B948299CD47;
namespace PampelGames::RoadConstructor { class RoadObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Splines { class Spline; }

#define E60E0265C86FABAB_A18E90C028766A9F_OFFSET UNITYSDK_OFFSET(0x3DABA20)
#define E60E0265C86FABAB_B943420622205AD8_OFFSET UNITYSDK_OFFSET(0x3DAB6D0)
#define E60E0265C86FABAB_BDAD1B79E27FD6E8_OFFSET UNITYSDK_OFFSET(0x3DABF90)
#define E60E0265C86FABAB_EF38BCEF41473209_OFFSET UNITYSDK_OFFSET(0x3DABC40)

inline static constexpr unsigned int E60E0265C86FABAB_TypeDefinitionIndex = 18907;

class E60E0265C86FABAB : public ::System::Object
{
public:
	static ::PampelGames::RoadConstructor::RoadObject* EF38BCEF41473209(::PampelGames::RoadConstructor::RoadObject* FB013D3338E39BC9, ::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::System::Single F755931F13A26DB3)
	{
		return ((::PampelGames::RoadConstructor::RoadObject*(*)(::PampelGames::RoadConstructor::RoadObject*, ::UnityEngine::Splines::Spline*, ::System::Single))((::PBYTE)hIl2Cpp + E60E0265C86FABAB_EF38BCEF41473209_OFFSET))(FB013D3338E39BC9, F03E0BDCBABB08A2, F755931F13A26DB3);
	}

	static ::PampelGames::RoadConstructor::RoadObject* B943420622205AD8(::A223860C50512B7D* FFE58E715263F6E4, ::BCA0E2700C819E81* AF2D77904893BF96, ::F77C0B948299CD47* EC442B0F96180C55, ::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::System::Single F755931F13A26DB3)
	{
		return ((::PampelGames::RoadConstructor::RoadObject*(*)(::A223860C50512B7D*, ::BCA0E2700C819E81*, ::F77C0B948299CD47*, ::UnityEngine::Splines::Spline*, ::System::Single))((::PBYTE)hIl2Cpp + E60E0265C86FABAB_B943420622205AD8_OFFSET))(FFE58E715263F6E4, AF2D77904893BF96, EC442B0F96180C55, F03E0BDCBABB08A2, F755931F13A26DB3);
	}

	static ::System::Void BDAD1B79E27FD6E8(::F77C0B948299CD47* EC442B0F96180C55, ::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::System::Single F755931F13A26DB3, ::System::Boolean E6015DA19BCC27A9, ::Il2CppArray<::UnityEngine::Material*>*& A564362144AC7B15, ::UnityEngine::Mesh*& E3E362210EFD4ECF)
	{
		return ((::System::Void(*)(::F77C0B948299CD47*, ::UnityEngine::Splines::Spline*, ::System::Single, ::System::Boolean, ::Il2CppArray<::UnityEngine::Material*>*&, ::UnityEngine::Mesh*&))((::PBYTE)hIl2Cpp + E60E0265C86FABAB_BDAD1B79E27FD6E8_OFFSET))(EC442B0F96180C55, F03E0BDCBABB08A2, F755931F13A26DB3, E6015DA19BCC27A9, A564362144AC7B15, E3E362210EFD4ECF);
	}

	static ::UnityEngine::GameObject* A18E90C028766A9F(::F77C0B948299CD47* EC442B0F96180C55, ::System::Collections::Generic::List_1<::AAE946DB9D3CB37B*>* A7E4C2E687E18F68, ::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::UnityEngine::MeshFilter*& E0A8C9EE7A6DB824, ::UnityEngine::MeshRenderer*& EEAFF4B885E11AA1, ::System::Single F755931F13A26DB3)
	{
		return ((::UnityEngine::GameObject*(*)(::F77C0B948299CD47*, ::System::Collections::Generic::List_1<::AAE946DB9D3CB37B*>*, ::UnityEngine::Splines::Spline*, ::UnityEngine::MeshFilter*&, ::UnityEngine::MeshRenderer*&, ::System::Single))((::PBYTE)hIl2Cpp + E60E0265C86FABAB_A18E90C028766A9F_OFFSET))(EC442B0F96180C55, A7E4C2E687E18F68, F03E0BDCBABB08A2, E0A8C9EE7A6DB824, EEAFF4B885E11AA1, F755931F13A26DB3);
	}
};
