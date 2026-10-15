#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ABIFFCKLEOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C580EE0)
#define ABIFFCKLEOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C580ED0)
#define ABIFFCKLEOF_EBKOAAPDLOD_OFFSET UNITYSDK_OFFSET(0x1C580BC0)
#define ABIFFCKLEOF_ICDGPECDPFO_OFFSET UNITYSDK_OFFSET(0x1C580C30)
#define ABIFFCKLEOF_MEBPCCPOMHK_1_OFFSET UNITYSDK_OFFSET(0x1C580D60)
#define ABIFFCKLEOF_MEBPCCPOMHK_2_OFFSET UNITYSDK_OFFSET(0x1C580E10)
#define ABIFFCKLEOF_MEBPCCPOMHK_OFFSET UNITYSDK_OFFSET(0x1C580CB0)

inline static constexpr unsigned int ABIFFCKLEOF_TypeDefinitionIndex = 37006;

	class ABIFFCKLEOF : public ::System::Object
	{
	public:
		static ::System::Guid* StaticGet_ALCCFEHEOBN()
		{
			return (::System::Guid*)UnitySDK::FromName("", "ABIFFCKLEOF")->GetStaticField(0x12E20);
		}

		static ::System::Single* StaticGet_LCHEBJKNFNF()
		{
			return (::System::Single*)UnitySDK::FromName("", "ABIFFCKLEOF")->GetStaticField(0x12E30);
		}

		static ::RPG::MVector3* StaticGet_EMHOCDLFGBN()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "ABIFFCKLEOF")->GetStaticField(0x12E34);
		}

		// static const ::System::Object GONCEDKMGHL; // 0x0
		// static const ::System::Object EIDOMHIFKOO; // 0x0
		// static const ::System::Object CDOPHDAPPLA; // 0x0
		// static const ::System::Object DJHCLLNEDCD; // 0x0
		// static const ::System::Object AHNBFLBAKAB; // 0x0
		// static const ::System::Object CEEJAIIGGJF; // 0x0
		// static const ::System::Object BNDPCOLGNCE; // 0x0
		// static const ::System::Object LHBCGDOJIHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABIFFCKLEOF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABIFFCKLEOF_CCTOR_OFFSET))();
		}

		static ::System::Boolean EBKOAAPDLOD(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + ABIFFCKLEOF_EBKOAAPDLOD_OFFSET))(a1);
		}

		static ::System::Boolean ICDGPECDPFO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABIFFCKLEOF_ICDGPECDPFO_OFFSET))(a1, a2);
		}

		static ::System::Boolean MEBPCCPOMHK(::RPG::GameCore::CompareType a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ABIFFCKLEOF_MEBPCCPOMHK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MEBPCCPOMHK_1(::RPG::GameCore::CompareType a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ABIFFCKLEOF_MEBPCCPOMHK_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean MEBPCCPOMHK_2(::RPG::GameCore::CompareType a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CompareType, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABIFFCKLEOF_MEBPCCPOMHK_2_OFFSET))(a1, a2, a3, a4);
		}

	};
