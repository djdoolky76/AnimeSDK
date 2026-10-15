#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDHLJJCMEDJ.h"
#include "unitysdk/RPG/Client/CircleDetectDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define GJMJIENPDDF_ANCEOJDJBDK_OFFSET UNITYSDK_OFFSET(0x15A78FE0)
#define GJMJIENPDDF_BECLAHDLPGL_OFFSET UNITYSDK_OFFSET(0x15A78C20)
#define GJMJIENPDDF_BHPKINNCGIP_OFFSET UNITYSDK_OFFSET(0x15A764E0)
#define GJMJIENPDDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A79250)
#define GJMJIENPDDF_CPJCNKFEEGP_OFFSET UNITYSDK_OFFSET(0x15A703C0)
#define GJMJIENPDDF_EEHEGLDGEAO_OFFSET UNITYSDK_OFFSET(0x15A72D00)
#define GJMJIENPDDF_EMNJNAKDAAO_OFFSET UNITYSDK_OFFSET(0x15A75B40)
#define GJMJIENPDDF_FFKDAPAGHMJ_OFFSET UNITYSDK_OFFSET(0x15A6FD20)
#define GJMJIENPDDF_FGGKKPHOPDK_OFFSET UNITYSDK_OFFSET(0x15A6FF20)
#define GJMJIENPDDF_IADPEPHCNBN_OFFSET UNITYSDK_OFFSET(0x15A73000)
#define GJMJIENPDDF_IHKDPLHACJN_OFFSET UNITYSDK_OFFSET(0x15A784B0)
#define GJMJIENPDDF_IMJBAANBJOA_OFFSET UNITYSDK_OFFSET(0x15A762B0)
#define GJMJIENPDDF_JBNLAMEIACH_OFFSET UNITYSDK_OFFSET(0x15A6FC80)
#define GJMJIENPDDF_LEHJAKDPMIL_OFFSET UNITYSDK_OFFSET(0x15A73FA0)
#define GJMJIENPDDF_LHHDACLJONJ_OFFSET UNITYSDK_OFFSET(0x15A70F70)
#define GJMJIENPDDF_MHIIHCEGNAB_OFFSET UNITYSDK_OFFSET(0x15A76EB0)
#define GJMJIENPDDF_MPFCIJBANME_OFFSET UNITYSDK_OFFSET(0x15A77370)
#define GJMJIENPDDF_NGKIHMLBGLE_OFFSET UNITYSDK_OFFSET(0x15A72A60)
#define GJMJIENPDDF_OAJDOMAOEAN_OFFSET UNITYSDK_OFFSET(0x15A76190)

	class GJMJIENPDDF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_MJNJGCEAGCA()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "GJMJIENPDDF")->GetStaticField(0x60B30);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_GHHDEEIDLNH()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "GJMJIENPDDF")->GetStaticField(0x60B38);
		}

		static ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>** StaticGet_GGJOIOGOMFE()
		{
			return (::System::Collections::Generic::List_1<::PDHLJJCMEDJ>**)UnitySDK::FromName("", "GJMJIENPDDF")->GetStaticField(0x60B40);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_MMMMLJIAAJA()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "GJMJIENPDDF")->GetStaticField(0x60B48);
		}

		static ::Il2CppArray<::System::Int32>** StaticGet_ACPGINGIHFD()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "GJMJIENPDDF")->GetStaticField(0x60B50);
		}

		static ::UnityEngine::RaycastHit* StaticGet_NCFEABKDBOC()
		{
			return (::UnityEngine::RaycastHit*)UnitySDK::FromName("", "GJMJIENPDDF")->GetStaticField(0x14A00);
		}

		static ::System::Boolean* StaticGet_CKBKEALFBME()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GJMJIENPDDF")->GetStaticField(0x14A30);
		}

		static ::UnityEngine::RaycastHit* StaticGet_IKFDMCHHMAL()
		{
			return (::UnityEngine::RaycastHit*)UnitySDK::FromName("", "GJMJIENPDDF")->GetStaticField(0x14A34);
		}

		static ::UnityEngine::RaycastHit* StaticGet_JHFLIBJHFEG()
		{
			return (::UnityEngine::RaycastHit*)UnitySDK::FromName("", "GJMJIENPDDF")->GetStaticField(0x14A64);
		}

		// static const ::System::Object AJGJDBLMIGO; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJMJIENPDDF_CCTOR_OFFSET))();
		}

		static ::System::Void JBNLAMEIACH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJMJIENPDDF_JBNLAMEIACH_OFFSET))();
		}

		static ::System::Boolean FFKDAPAGHMJ(::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Collider* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + GJMJIENPDDF_FFKDAPAGHMJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FGGKKPHOPDK(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* a4, ::System::Boolean a5, ::UnityEngine::RaycastHit a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*, ::System::Boolean, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + GJMJIENPDDF_FGGKKPHOPDK_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Nullable* CPJCNKFEEGP(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::RPG::Client::CircleDetectDirection a5, ::UnityEngine::LayerMask a6)
		{
			return ((::System::Nullable*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::RPG::Client::CircleDetectDirection, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + GJMJIENPDDF_CPJCNKFEEGP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* LHHDACLJONJ(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::LayerMask a6, ::System::Boolean a7)
		{
			return ((::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + GJMJIENPDDF_LHHDACLJONJ_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* IADPEPHCNBN(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::LayerMask a6)
		{
			return ((::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + GJMJIENPDDF_IADPEPHCNBN_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* LEHJAKDPMIL(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::LayerMask a7)
		{
			return ((::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + GJMJIENPDDF_LEHJAKDPMIL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* EMNJNAKDAAO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
		{
			return ((::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + GJMJIENPDDF_EMNJNAKDAAO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean OAJDOMAOEAN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::LayerMask a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + GJMJIENPDDF_OAJDOMAOEAN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean IMJBAANBJOA(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::LayerMask a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GJMJIENPDDF_IMJBAANBJOA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* BHPKINNCGIP(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::LayerMask a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GJMJIENPDDF_BHPKINNCGIP_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Nullable* MHIIHCEGNAB(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::LayerMask a3)
		{
			return ((::System::Nullable*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + GJMJIENPDDF_MHIIHCEGNAB_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::PDHLJJCMEDJ>* MPFCIJBANME(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::LayerMask a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Collections::Generic::List_1<::PDHLJJCMEDJ>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::LayerMask, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GJMJIENPDDF_MPFCIJBANME_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Nullable* IHKDPLHACJN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::LayerMask a4, ::System::Boolean a5)
		{
			return ((::System::Nullable*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + GJMJIENPDDF_IHKDPLHACJN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::System::Int32>* EEHEGLDGEAO(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GJMJIENPDDF_EEHEGLDGEAO_OFFSET))(a1);
		}

		static ::System::Boolean NGKIHMLBGLE(::UnityEngine::Vector3 a1, ::UnityEngine::Collider* a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + GJMJIENPDDF_NGKIHMLBGLE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 BECLAHDLPGL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + GJMJIENPDDF_BECLAHDLPGL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single ANCEOJDJBDK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + GJMJIENPDDF_ANCEOJDJBDK_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
