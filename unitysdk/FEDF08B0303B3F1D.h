#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class B45E2413779DA9FA;
class E19149042C681BEF;
class F834E929B10E264B;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FEDF08B0303B3F1D_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x3820B30)
#define FEDF08B0303B3F1D_A227CC6F553401D9_OFFSET UNITYSDK_OFFSET(0x38214F0)
#define FEDF08B0303B3F1D_EC7CEB9640DCACA1_OFFSET UNITYSDK_OFFSET(0x38212D0)
#define FEDF08B0303B3F1D_F703A3185EFBD44E_OFFSET UNITYSDK_OFFSET(0x38214B0)
#define FEDF08B0303B3F1D_F77E37144233374A_OFFSET UNITYSDK_OFFSET(0x3821530)
#define FEDF08B0303B3F1D__CTOR_OFFSET UNITYSDK_OFFSET(0x38213A0)

inline static constexpr unsigned int FEDF08B0303B3F1D_TypeDefinitionIndex = 17886;

class FEDF08B0303B3F1D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::B45E2413779DA9FA*>* B8B0EF9ED37BA7F0; // 0x10
	::System::Collections::Generic::List_1<::E19149042C681BEF*>* A27DC0C3E59C7461; // 0x18
	::System::Collections::Generic::List_1<::F834E929B10E264B*>* BB582B2ABC8BE03C; // 0x20

	::System::Int32 A227CC6F553401D9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDF08B0303B3F1D_A227CC6F553401D9_OFFSET))(this);
	}

	::System::Int32 F703A3185EFBD44E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDF08B0303B3F1D_F703A3185EFBD44E_OFFSET))(this);
	}

	::UnityEngine::Vector3 EC7CEB9640DCACA1(::UnityEngine::Vector3 EB211B01816ACA79, ::UnityEngine::Quaternion A0556B8B541B6D55, ::System::Single BDDF0F6C01956F38)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + FEDF08B0303B3F1D_EC7CEB9640DCACA1_OFFSET))(this, EB211B01816ACA79, A0556B8B541B6D55, BDDF0F6C01956F38);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDF08B0303B3F1D__CTOR_OFFSET))(this);
	}

	::System::Int32 F77E37144233374A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDF08B0303B3F1D_F77E37144233374A_OFFSET))(this);
	}

	::System::Void A1E97155B145443C(::UnityEngine::GameObject* B59CE483D6896C6E)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FEDF08B0303B3F1D_A1E97155B145443C_OFFSET))(this, B59CE483D6896C6E);
	}
};
