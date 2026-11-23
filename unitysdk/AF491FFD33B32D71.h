#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E56EA45C01664F53.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

class EDE28F8CFA874AE5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define AF491FFD33B32D71_A09D5B98EFD3533E_1_OFFSET UNITYSDK_OFFSET(0x1F13BF0)
#define AF491FFD33B32D71_A09D5B98EFD3533E_OFFSET UNITYSDK_OFFSET(0x1F137A0)
#define AF491FFD33B32D71_A3083F162659B7CC_OFFSET UNITYSDK_OFFSET(0x1F145F0)
#define AF491FFD33B32D71_A3A7F4D4C6067AC5_OFFSET UNITYSDK_OFFSET(0x1F12720)
#define AF491FFD33B32D71_A58465F740DB8C39_OFFSET UNITYSDK_OFFSET(0x1F12830)
#define AF491FFD33B32D71_B11FAC3C836E51FF_OFFSET UNITYSDK_OFFSET(0x1F15200)
#define AF491FFD33B32D71_B47ADBA416D087C7_OFFSET UNITYSDK_OFFSET(0x1F12070)
#define AF491FFD33B32D71_BB0A18F86D2E7C05_OFFSET UNITYSDK_OFFSET(0x1F152B0)
#define AF491FFD33B32D71_EB3FEFEAFF0549A3_OFFSET UNITYSDK_OFFSET(0x1F14060)
#define AF491FFD33B32D71_F01686EE6C4969D2_OFFSET UNITYSDK_OFFSET(0x1F14970)
#define AF491FFD33B32D71_F04CF63237361794_OFFSET UNITYSDK_OFFSET(0x1F131E0)
#define AF491FFD33B32D71_F1523ED88B79DA3E_OFFSET UNITYSDK_OFFSET(0x1F14EA0)
#define AF491FFD33B32D71_F2113189DBD1A0C7_OFFSET UNITYSDK_OFFSET(0x1F153D0)
#define AF491FFD33B32D71_F21E90A80AC0BE06_OFFSET UNITYSDK_OFFSET(0x1F14520)
#define AF491FFD33B32D71_FA7C1854046C18CF_1_OFFSET UNITYSDK_OFFSET(0x1F11F70)
#define AF491FFD33B32D71_FA7C1854046C18CF_OFFSET UNITYSDK_OFFSET(0x1F11E10)
#define AF491FFD33B32D71_FC9BA7DBF930B6C2_OFFSET UNITYSDK_OFFSET(0x1F135E0)
#define AF491FFD33B32D71_FEC7708FEA1F6587_OFFSET UNITYSDK_OFFSET(0x1F155E0)
#define AF491FFD33B32D71__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F15860)
#define AF491FFD33B32D71__CTOR_OFFSET UNITYSDK_OFFSET(0x1F15910)

inline static constexpr unsigned int AF491FFD33B32D71_TypeDefinitionIndex = 7538;

class AF491FFD33B32D71 : public ::System::Object
{
public:
	static ::UnityEngine::E46B881AA2636190* StaticGet_F0B41BF053069510()
	{
		return (::UnityEngine::E46B881AA2636190*)Il2CppClass::FromTypeDefinitionIndex(AF491FFD33B32D71_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Int32 A56A85E8E9084A36; // 0x10
	::System::Byte _padding0[0x4];
	::E865F6F8B8B44C1E F772CF68FB3A514A; // 0x18
	::UnityEngine::GameObject* A2ACBA2099564073; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BC3F3C3A6DD11ACA; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* F081B628C6A4AD30; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* E5A709CAB89854A8; // 0x38
	::UnityEngine::Transform* E0E2A2A52E9E0EB9; // 0x40
	::E68AA4EB51923C98::E56EA45C01664F53 B3C7308978D3A860; // 0x48
	::System::Byte _padding1[0x4];
	::EDE28F8CFA874AE5* B5EB2B8F1F68AA61; // 0x50

	::System::Void A58465F740DB8C39(::UnityEngine::Material* BAD750C579B31470, ::UnityEngine::Material* E92FF0F8DAED82C8, ::System::Int32 FD41E1D2FE9C1CC7, ::UnityEngine::SkinnedMeshRenderer* E7F3152451926009)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_A58465F740DB8C39_OFFSET))(this, BAD750C579B31470, E92FF0F8DAED82C8, FD41E1D2FE9C1CC7, E7F3152451926009);
	}

	::System::Void FA7C1854046C18CF(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* BA503C83FE93C0FB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* A97703D273250A05, ::System::Boolean AC22214D17CFE5E9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_FA7C1854046C18CF_OFFSET))(this, BA503C83FE93C0FB, A97703D273250A05, AC22214D17CFE5E9);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AF491FFD33B32D71__CCTOR_OFFSET))();
	}

	::System::Void FA7C1854046C18CF_1(::UnityEngine::Transform* E7A41DB667CBC570, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* BA503C83FE93C0FB, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FCC7A2B809BB7064, ::System::Boolean AC22214D17CFE5E9, ::System::Boolean FAA4B3E96D8FD7C1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_FA7C1854046C18CF_1_OFFSET))(this, E7A41DB667CBC570, BA503C83FE93C0FB, FCC7A2B809BB7064, AC22214D17CFE5E9, FAA4B3E96D8FD7C1);
	}

	::System::Void F01686EE6C4969D2(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* BA503C83FE93C0FB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* A97703D273250A05)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_F01686EE6C4969D2_OFFSET))(this, BA503C83FE93C0FB, A97703D273250A05);
	}

	::System::Void FEC7708FEA1F6587(::UnityEngine::SkinnedMeshRenderer* E700C859E5D059E3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* FEB10E869AFA31F5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_FEC7708FEA1F6587_OFFSET))(this, E700C859E5D059E3, FEB10E869AFA31F5);
	}

	::System::Void A3A7F4D4C6067AC5(::UnityEngine::Transform* A525E46A9CD93677, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*& FEB10E869AFA31F5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_A3A7F4D4C6067AC5_OFFSET))(this, A525E46A9CD93677, FEB10E869AFA31F5);
	}

	::System::Void F1523ED88B79DA3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_F1523ED88B79DA3E_OFFSET))(this);
	}

	::System::Void _ctor(::UnityEngine::Transform* BD86DA2622942D08, ::E68AA4EB51923C98::E56EA45C01664F53 EF3AF5F88EF3F20C, ::EDE28F8CFA874AE5* E67894DD11CDD0A6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::E68AA4EB51923C98::E56EA45C01664F53, ::EDE28F8CFA874AE5*))((::PBYTE)hIl2Cpp + AF491FFD33B32D71__CTOR_OFFSET))(this, BD86DA2622942D08, EF3AF5F88EF3F20C, E67894DD11CDD0A6);
	}

	::System::Void EB3FEFEAFF0549A3(::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::E56EA45C01664F53, ::UnityEngine::Material*>* F35D3310EED9AF83, ::UnityEngine::SkinnedMeshRenderer* E7F3152451926009)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::E56EA45C01664F53, ::UnityEngine::Material*>*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_EB3FEFEAFF0549A3_OFFSET))(this, F35D3310EED9AF83, E7F3152451926009);
	}

	::UnityEngine::Transform* FC9BA7DBF930B6C2()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_FC9BA7DBF930B6C2_OFFSET))(this);
	}

	::System::Void BB0A18F86D2E7C05(::UnityEngine::SkinnedMeshRenderer* E7F3152451926009)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_BB0A18F86D2E7C05_OFFSET))(this, E7F3152451926009);
	}

	::System::Void A09D5B98EFD3533E(::UnityEngine::Transform* A525E46A9CD93677, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* FEB10E869AFA31F5, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FCC7A2B809BB7064, ::System::Boolean FAA4B3E96D8FD7C1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_A09D5B98EFD3533E_OFFSET))(this, A525E46A9CD93677, FEB10E869AFA31F5, FCC7A2B809BB7064, FAA4B3E96D8FD7C1);
	}

	::System::Void B11FAC3C836E51FF(::UnityEngine::SkinnedMeshRenderer* E7F3152451926009)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_B11FAC3C836E51FF_OFFSET))(this, E7F3152451926009);
	}

	::System::Void F04CF63237361794(::UnityEngine::Material* BAD750C579B31470, ::UnityEngine::Material* E92FF0F8DAED82C8, ::System::Int32 FD41E1D2FE9C1CC7, ::UnityEngine::SkinnedMeshRenderer* E7F3152451926009)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_F04CF63237361794_OFFSET))(this, BAD750C579B31470, E92FF0F8DAED82C8, FD41E1D2FE9C1CC7, E7F3152451926009);
	}

	::System::Void F2113189DBD1A0C7(::UnityEngine::SkinnedMeshRenderer* E7F3152451926009)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_F2113189DBD1A0C7_OFFSET))(this, E7F3152451926009);
	}

	::System::Void A09D5B98EFD3533E_1(::UnityEngine::Transform* A525E46A9CD93677, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* FEB10E869AFA31F5, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FCC7A2B809BB7064, ::System::Int32& A70E5C58B2C7A692, ::System::Boolean FAA4B3E96D8FD7C1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_A09D5B98EFD3533E_1_OFFSET))(this, A525E46A9CD93677, FEB10E869AFA31F5, FCC7A2B809BB7064, A70E5C58B2C7A692, FAA4B3E96D8FD7C1);
	}

	::System::Void B47ADBA416D087C7(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* FEB10E869AFA31F5, ::System::Boolean E4D4BBD6FB6F6574)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_B47ADBA416D087C7_OFFSET))(this, FEB10E869AFA31F5, E4D4BBD6FB6F6574);
	}

	::System::Void A3083F162659B7CC(::E865F6F8B8B44C1E BC707AB04028EF19, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* BA503C83FE93C0FB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* A97703D273250A05)
	{
		return ((::System::Void(*)(::PVOID, ::E865F6F8B8B44C1E, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_A3083F162659B7CC_OFFSET))(this, BC707AB04028EF19, BA503C83FE93C0FB, A97703D273250A05);
	}

	::UnityEngine::GameObject* F21E90A80AC0BE06(::E865F6F8B8B44C1E B972F96A6DDE8EE3)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::E865F6F8B8B44C1E))((::PBYTE)hIl2Cpp + AF491FFD33B32D71_F21E90A80AC0BE06_OFFSET))(this, B972F96A6DDE8EE3);
	}
};
