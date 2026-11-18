#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
class FBAMLABJMKF;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CAMERAZOOMZ_B__114_0_OFFSET UNITYSDK_OFFSET(0x17F45750)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F45700)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F45740)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DOUPDATE_B__213_0_OFFSET UNITYSDK_OFFSET(0x17F457E0)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DOUPDATE_B__213_1_OFFSET UNITYSDK_OFFSET(0x17F45990)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__INITVIDEOPOOL_G__ONRELEASE_182_1_OFFSET UNITYSDK_OFFSET(0x17F45770)
#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__REQCAMERAZOOMZ_B__173_0_OFFSET UNITYSDK_OFFSET(0x17F45760)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController___c_TypeDefinitionIndex = 43497;

	class UIHollowChessboard3DModelController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__173_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x3C300);
		}
		static ::System::Action_1<::FBAMLABJMKF*>** StaticGet___9__213_0()
		{
			return (::System::Action_1<::FBAMLABJMKF*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x3C308);
		}
		static ::System::Action** StaticGet___9__114_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x3C310);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x3C318);
		}
		static ::System::Func_2<::FBAMLABJMKF*, ::System::Boolean>** StaticGet___9__213_1()
		{
			return (::System::Func_2<::FBAMLABJMKF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboard3DModelController___c_TypeDefinitionIndex)->GetStaticField(0x3C320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _CameraZoomZ_b__114_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__CAMERAZOOMZ_B__114_0_OFFSET))(this);
		}

		::System::Void _ReqCameraZoomZ_b__173_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__REQCAMERAZOOMZ_B__173_0_OFFSET))(this);
		}

		::System::Void _InitVideoPool_g__OnRelease_182_1(::DGDNKBFMHME* o)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__INITVIDEOPOOL_G__ONRELEASE_182_1_OFFSET))(this, o);
		}

		::System::Void _DoUpdate_b__213_0(::FBAMLABJMKF* c)
		{
			return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DOUPDATE_B__213_0_OFFSET))(this, c);
		}

		::System::Boolean _DoUpdate_b__213_1(::FBAMLABJMKF* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER___C__DOUPDATE_B__213_1_OFFSET))(this, c);
		}
	};
}
