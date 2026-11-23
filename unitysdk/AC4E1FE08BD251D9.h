#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define AC4E1FE08BD251D9_B4C0C114AC7870F5_OFFSET UNITYSDK_OFFSET(0x3836770)
#define AC4E1FE08BD251D9_BA8BE68B3426BDF2_OFFSET UNITYSDK_OFFSET(0x3835DC0)
#define AC4E1FE08BD251D9_E983816BCEA296F2_OFFSET UNITYSDK_OFFSET(0x3836730)

inline static constexpr unsigned int AC4E1FE08BD251D9_TypeDefinitionIndex = 17938;

class AC4E1FE08BD251D9 : public ::System::Object
{
public:
	static ::System::String* B4C0C114AC7870F5(::System::String* A07F9FCC18DB1225, ::Il2CppArray<::System::String*>* B936E4D2482FBE94, ::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + AC4E1FE08BD251D9_B4C0C114AC7870F5_OFFSET))(A07F9FCC18DB1225, B936E4D2482FBE94, B48C66E5FB2449C6);
	}

	static ::Il2CppArray<::UnityEngine::Vector2>* E983816BCEA296F2(::UnityEngine::Mesh* E94A3DC15079D341)
	{
		return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + AC4E1FE08BD251D9_E983816BCEA296F2_OFFSET))(E94A3DC15079D341);
	}

	static ::System::Void BA8BE68B3426BDF2(::UnityEngine::Mesh* FF762A0FE86505A5)
	{
		return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + AC4E1FE08BD251D9_BA8BE68B3426BDF2_OFFSET))(FF762A0FE86505A5);
	}
};
