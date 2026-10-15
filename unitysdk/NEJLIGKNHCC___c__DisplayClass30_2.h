#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEJLIGKNHCC___C__DISPLAYCLASS30_2_CTOR_OFFSET UNITYSDK_OFFSET(0xBB66720)
#define NEJLIGKNHCC___C__DISPLAYCLASS30_2___BUILDPOINTLAYOUT_B__1_OFFSET UNITYSDK_OFFSET(0xBB67490)

	template <typename T1, typename T2>
	class NEJLIGKNHCC___c__DisplayClass30_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* candidates; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC___C__DISPLAYCLASS30_2_CTOR_OFFSET))(this);
		}

		::System::Void __BuildPointLayout_b__1(::JOGBIBJLPJB a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::JOGBIBJLPJB, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEJLIGKNHCC___C__DISPLAYCLASS30_2___BUILDPOINTLAYOUT_B__1_OFFSET))(this, a1, a2, a3);
		}

	};
