#pragma once
#include "unitysdk/unitysdk.h"

class FCCBA236732571F3;
class FD13E078C250FD12;
namespace ABC::CustomRenderPipeline { class ABCGraphicsSettingsData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define A7F35CB4DDC8E11F_A1051E567989637E_OFFSET UNITYSDK_OFFSET(0x27D9D20)
#define A7F35CB4DDC8E11F_B5C67A784BF0C9D3_OFFSET UNITYSDK_OFFSET(0x27DA650)
#define A7F35CB4DDC8E11F_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x27D9BB0)
#define A7F35CB4DDC8E11F_EC22F59F2C588175_OFFSET UNITYSDK_OFFSET(0x27D9F20)
#define A7F35CB4DDC8E11F_EDBC64FBFA140306_OFFSET UNITYSDK_OFFSET(0x27DA750)
#define A7F35CB4DDC8E11F__CCTOR_OFFSET UNITYSDK_OFFSET(0x27DA7B0)
#define A7F35CB4DDC8E11F__CTOR_OFFSET UNITYSDK_OFFSET(0x27DA7F0)

inline static constexpr unsigned int A7F35CB4DDC8E11F_TypeDefinitionIndex = 16732;

class A7F35CB4DDC8E11F
{
public:
	static ::System::Int32* StaticGet_B51BAF58CC742F73()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(A7F35CB4DDC8E11F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* F57149BFBEFA5D63; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* F90A579F8CB1EF4E; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F35CB4DDC8E11F__CTOR_OFFSET))(this);
	}

	::System::Void EC22F59F2C588175(::System::Collections::Generic::List_1<::UnityEngine::Camera*>* B105238D81529AD7, ::FCCBA236732571F3* B2E76D73414FBCA2, ::ABC::CustomRenderPipeline::ABCGraphicsSettingsData* A97755FBB9C09A5D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*, ::FCCBA236732571F3*, ::ABC::CustomRenderPipeline::ABCGraphicsSettingsData*))((::PBYTE)hIl2Cpp + A7F35CB4DDC8E11F_EC22F59F2C588175_OFFSET))(this, B105238D81529AD7, B2E76D73414FBCA2, A97755FBB9C09A5D);
	}

	::FD13E078C250FD12* A1051E567989637E(::System::Int32 B9E2B51FCB2A9C69, ::System::Boolean E2E4DD98CB7ECE02)
	{
		return ((::FD13E078C250FD12*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + A7F35CB4DDC8E11F_A1051E567989637E_OFFSET))(this, B9E2B51FCB2A9C69, E2E4DD98CB7ECE02);
	}

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7F35CB4DDC8E11F_E8AF1E0387A100FA_OFFSET))(this);
	}

	::System::Void B5C67A784BF0C9D3(::FD13E078C250FD12* BBA37BE3F1DE1B88, ::UnityEngine::Camera* E929054BCEC2CE82)
	{
		return ((::System::Void(*)(::PVOID, ::FD13E078C250FD12*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + A7F35CB4DDC8E11F_B5C67A784BF0C9D3_OFFSET))(this, BBA37BE3F1DE1B88, E929054BCEC2CE82);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A7F35CB4DDC8E11F__CCTOR_OFFSET))();
	}

	::System::Void EDBC64FBFA140306(::FD13E078C250FD12* BBA37BE3F1DE1B88, ::FCCBA236732571F3* B2E76D73414FBCA2, ::ABC::CustomRenderPipeline::ABCGraphicsSettingsData* BBFAC7F81994D71F)
	{
		return ((::System::Void(*)(::PVOID, ::FD13E078C250FD12*, ::FCCBA236732571F3*, ::ABC::CustomRenderPipeline::ABCGraphicsSettingsData*))((::PBYTE)hIl2Cpp + A7F35CB4DDC8E11F_EDBC64FBFA140306_OFFSET))(this, BBA37BE3F1DE1B88, B2E76D73414FBCA2, BBFAC7F81994D71F);
	}
};
