#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E38A0A376336C717;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define AEE8858B46C9981D_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x276A400)
#define AEE8858B46C9981D_A2F3AE1FF3E1C30E_OFFSET UNITYSDK_OFFSET(0x18E4420)
#define AEE8858B46C9981D_A5557FF4F78E1AC9_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define AEE8858B46C9981D_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x276A1D0)
#define AEE8858B46C9981D_AF33B0AE5383D735_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define AEE8858B46C9981D_BACC42C516908A35_OFFSET UNITYSDK_OFFSET(0x276A070)
#define AEE8858B46C9981D_BC6D7EAC99E92E66_OFFSET UNITYSDK_OFFSET(0x276A290)
#define AEE8858B46C9981D_FE32FA9DC4C8F4CA_OFFSET UNITYSDK_OFFSET(0x276A7C0)
#define AEE8858B46C9981D_FEA1B4A841E4C839_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define AEE8858B46C9981D__CTOR_OFFSET UNITYSDK_OFFSET(0x276A6B0)

inline static constexpr unsigned int AEE8858B46C9981D_TypeDefinitionIndex = 16503;

class AEE8858B46C9981D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* EDB076E08B0EFC1B; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* B57BF5275B8E9B2E; // 0x18
	::System::Collections::Generic::List_1<::E38A0A376336C717*>* BFAA401C4CC169A6; // 0x20
	::System::Int32 AC2F3DB693747BB6; // 0x28

	::System::Int32 FE32FA9DC4C8F4CA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEE8858B46C9981D_FE32FA9DC4C8F4CA_OFFSET))(this);
	}

	::System::Int32 A2F3AE1FF3E1C30E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEE8858B46C9981D_A2F3AE1FF3E1C30E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEE8858B46C9981D__CTOR_OFFSET))(this);
	}

	::System::Void BACC42C516908A35(::UnityEngine::Material* AB46C569831095E4, ::Il2CppArray<::System::Int32>* A20F7DA6C3DBB58A, ::System::Boolean BB51AE04C1A9606F, ::Il2CppArray<::System::Int32>* E94DD1D2A450E49D, ::System::Boolean B41D4D78A3E41200)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AEE8858B46C9981D_BACC42C516908A35_OFFSET))(this, AB46C569831095E4, A20F7DA6C3DBB58A, BB51AE04C1A9606F, E94DD1D2A450E49D, B41D4D78A3E41200);
	}

	::System::Void BC6D7EAC99E92E66(::UnityEngine::Material* AB46C569831095E4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + AEE8858B46C9981D_BC6D7EAC99E92E66_OFFSET))(this, AB46C569831095E4);
	}

	::System::Collections::Generic::List_1<::E38A0A376336C717*>* A5557FF4F78E1AC9()
	{
		return ((::System::Collections::Generic::List_1<::E38A0A376336C717*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEE8858B46C9981D_A5557FF4F78E1AC9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* AF33B0AE5383D735()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEE8858B46C9981D_AF33B0AE5383D735_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FEA1B4A841E4C839()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEE8858B46C9981D_FEA1B4A841E4C839_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::UnityEngine::GameObject* B919B846D6BC0B1B, ::UnityEngine::Material* AB46C569831095E4, ::Il2CppArray<::System::Int32>* A20F7DA6C3DBB58A, ::System::Boolean BB51AE04C1A9606F, ::Il2CppArray<::System::Int32>* E94DD1D2A450E49D, ::System::Boolean B41D4D78A3E41200)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AEE8858B46C9981D_A1E97155B145443C_OFFSET))(this, B919B846D6BC0B1B, AB46C569831095E4, A20F7DA6C3DBB58A, BB51AE04C1A9606F, E94DD1D2A450E49D, B41D4D78A3E41200);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEE8858B46C9981D_A765A1D14770A303_OFFSET))(this);
	}
};
