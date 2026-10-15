#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIIIBFIMIIE;
namespace System { class Object; }

#define HIIIBFIMIIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E597030)
#define HIIIBFIMIIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E597060)
#define HIIIBFIMIIE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E597070)

inline static constexpr unsigned int HIIIBFIMIIE___c_TypeDefinitionIndex = 32323;

	class HIIIBFIMIIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIIIBFIMIIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE___C_CTOR_OFFSET))(this);
		}

		::HIIIBFIMIIE* __cctor_b__28_0()
		{
			return ((::HIIIBFIMIIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIIBFIMIIE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
