#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNOENBKDPFH;
namespace System { class Object; }

#define HNOENBKDPFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20037700)
#define HNOENBKDPFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20037740)
#define HNOENBKDPFH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20037750)

inline static constexpr unsigned int HNOENBKDPFH___c_TypeDefinitionIndex = 29201;

	class HNOENBKDPFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNOENBKDPFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOENBKDPFH___C_CTOR_OFFSET))(this);
		}

		::HNOENBKDPFH* __cctor_b__28_0()
		{
			return ((::HNOENBKDPFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOENBKDPFH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
