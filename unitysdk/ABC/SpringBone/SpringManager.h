#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/SpringBone/SpringManager_BBB3B5069B4F6885.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::SpringBone { class SpringBone; }
namespace ABC::SpringBone { class SpringManager_SpringBoneClass; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class Transform; }

#define ABC_SPRINGBONE_SPRINGMANAGER_A24911BE2843D8C3_OFFSET UNITYSDK_OFFSET(0x1FEB0A0)
#define ABC_SPRINGBONE_SPRINGMANAGER_A275576952178E3A_OFFSET UNITYSDK_OFFSET(0x1FEABF0)
#define ABC_SPRINGBONE_SPRINGMANAGER_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x1FEA840)
#define ABC_SPRINGBONE_SPRINGMANAGER_A8CD5F412B357E2C_OFFSET UNITYSDK_OFFSET(0x1FEAD40)
#define ABC_SPRINGBONE_SPRINGMANAGER_A8D21B6F23BAD5DD_OFFSET UNITYSDK_OFFSET(0x1FEA190)
#define ABC_SPRINGBONE_SPRINGMANAGER_B257DF87648DB887_OFFSET UNITYSDK_OFFSET(0x1FEA610)
#define ABC_SPRINGBONE_SPRINGMANAGER_B3E70FE81D073DDF_OFFSET UNITYSDK_OFFSET(0x1FEB0F0)
#define ABC_SPRINGBONE_SPRINGMANAGER_B7F2FB7B834189E1_OFFSET UNITYSDK_OFFSET(0x1FEAF20)
#define ABC_SPRINGBONE_SPRINGMANAGER_B7F87E9F75098CE0_OFFSET UNITYSDK_OFFSET(0x1FEA960)
#define ABC_SPRINGBONE_SPRINGMANAGER_B895979797A1E0DD_OFFSET UNITYSDK_OFFSET(0x1FEA5C0)
#define ABC_SPRINGBONE_SPRINGMANAGER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x1FEA8D0)
#define ABC_SPRINGBONE_SPRINGMANAGER_E0C8B7510CE817E6_OFFSET UNITYSDK_OFFSET(0x1FEAE50)
#define ABC_SPRINGBONE_SPRINGMANAGER_EC87780C83061BDF_OFFSET UNITYSDK_OFFSET(0x1FEADF0)
#define ABC_SPRINGBONE_SPRINGMANAGER_EF92BCD895229A99_OFFSET UNITYSDK_OFFSET(0x1FEA2D0)
#define ABC_SPRINGBONE_SPRINGMANAGER_F103688BDE25C243_1_OFFSET UNITYSDK_OFFSET(0x1FEB050)
#define ABC_SPRINGBONE_SPRINGMANAGER_F103688BDE25C243_OFFSET UNITYSDK_OFFSET(0x1FEAFC0)
#define ABC_SPRINGBONE_SPRINGMANAGER_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x1FEA7E0)
#define ABC_SPRINGBONE_SPRINGMANAGER_FCBE67B60405917F_OFFSET UNITYSDK_OFFSET(0x1FEB660)
#define ABC_SPRINGBONE_SPRINGMANAGER_FCDEE89396C00447_OFFSET UNITYSDK_OFFSET(0x1FEAC40)
#define ABC_SPRINGBONE_SPRINGMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEB590)

namespace ABC::SpringBone
{
	inline static constexpr unsigned int SpringManager_TypeDefinitionIndex = 8087;

	class SpringManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 mLastRootPos; // 0x20
		::System::Boolean IsRideMode; // 0x2C
		::System::Boolean UseMovementCompensation; // 0x2D
		::System::Byte _padding0[0x2];
		::UnityEngine::FAED0374422E783A* VerticalMovementScaleCurve; // 0x30
		::UnityEngine::FAED0374422E783A* HorizontalMovementtScaleCurve; // 0x38
		::System::Boolean saveDuringPlay; // 0x40
		::System::Byte _padding1[0x7];
		::System::String* clonePrefabPath; // 0x48
		::System::Single globalDynamicRatio; // 0x50
		::System::Byte _padding2[0x4];
		::UnityEngine::FAED0374422E783A* turnAngleToRatioCurve; // 0x58
		::System::Single decayRate; // 0x60
		::System::Single TurnRatioKeepTime; // 0x64
		::System::Boolean AlwaysEnableSpringBone; // 0x68
		::System::Byte _padding3[0x7];
		::Il2CppArray<::System::Object*>* SpringTypeGroupList; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* rootTransforms; // 0x78
		::Il2CppArray<::ABC::SpringBone::SpringBone*>* springBones; // 0x80
		::System::Boolean E56908493567A5EC; // 0x88
		::System::Byte _padding4[0x7];
		::System::String* FE8414D9451D2641; // 0x90
		::System::Single A456A2CD58F5B6EB; // 0x98
		::System::Single BAE9EE421C5D7362; // 0x9C
		::System::Single A344A8EFDBA303ED; // 0xA0

		::System::Void A8CD5F412B357E2C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_A8CD5F412B357E2C_OFFSET))(this);
		}

		::System::Void A24911BE2843D8C3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_A24911BE2843D8C3_OFFSET))(this);
		}

		::System::Single FCBE67B60405917F()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_FCBE67B60405917F_OFFSET))(this);
		}

		::System::Void B7F2FB7B834189E1(::System::Single A541119B3051239B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_B7F2FB7B834189E1_OFFSET))(this, A541119B3051239B);
		}

		::System::Boolean A8D21B6F23BAD5DD(::ABC::SpringBone::SpringBone* EE0CBC0D1784F68B)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::SpringBone::SpringBone*))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_A8D21B6F23BAD5DD_OFFSET))(this, EE0CBC0D1784F68B);
		}

		::System::Void F103688BDE25C243(::ABC::SpringBone::SpringManager_BBB3B5069B4F6885 A288CB28FC2A6DA3, ::System::Single A8129E037D3899E6, ::UnityEngine::FAED0374422E783A* BF3792D775A7C92E, ::ABC::SpringBone::SpringManager_SpringBoneClass* A8F662D68C2BC652)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::SpringBone::SpringManager_BBB3B5069B4F6885, ::System::Single, ::UnityEngine::FAED0374422E783A*, ::ABC::SpringBone::SpringManager_SpringBoneClass*))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_F103688BDE25C243_OFFSET))(this, A288CB28FC2A6DA3, A8129E037D3899E6, BF3792D775A7C92E, A8F662D68C2BC652);
		}

		::System::Void B895979797A1E0DD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_B895979797A1E0DD_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void FCDEE89396C00447(::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_FCDEE89396C00447_OFFSET))(this, EB5670302F34D4B7);
		}

		::System::Void F5E407B60CCCAC07()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_F5E407B60CCCAC07_OFFSET))(this);
		}

		::System::Void EC87780C83061BDF(::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_EC87780C83061BDF_OFFSET))(this, EB5670302F34D4B7);
		}

		::System::Void B3E70FE81D073DDF(::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_B3E70FE81D073DDF_OFFSET))(this, EB5670302F34D4B7);
		}

		::System::Void EF92BCD895229A99()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_EF92BCD895229A99_OFFSET))(this);
		}

		::System::Void E0C8B7510CE817E6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_E0C8B7510CE817E6_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void F103688BDE25C243_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_F103688BDE25C243_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 B257DF87648DB887(::UnityEngine::Vector3 B6581454933F1BB9)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_B257DF87648DB887_OFFSET))(this, B6581454933F1BB9);
		}

		::System::Void A275576952178E3A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_A275576952178E3A_OFFSET))(this);
		}

		::System::Void B7F87E9F75098CE0(::ABC::SpringBone::SpringBone* F7674A57FAB09D86, ::System::Collections::Generic::List_1<::ABC::SpringBone::SpringBone*>*& A6785B59C21DA318, ::System::Boolean F122BAB36474368A)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::SpringBone::SpringBone*, ::System::Collections::Generic::List_1<::ABC::SpringBone::SpringBone*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_SPRINGBONE_SPRINGMANAGER_B7F87E9F75098CE0_OFFSET))(this, F7674A57FAB09D86, A6785B59C21DA318, F122BAB36474368A);
		}
	};
}
