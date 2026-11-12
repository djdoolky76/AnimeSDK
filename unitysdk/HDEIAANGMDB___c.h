#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDEIAANGMDB;
namespace System { class Object; }

#define HDEIAANGMDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F844170)
#define HDEIAANGMDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8441B0)
#define HDEIAANGMDB___C___CCTOR_B__59_0_OFFSET UNITYSDK_OFFSET(0x1F8441C0)

inline static constexpr unsigned int HDEIAANGMDB___c_TypeDefinitionIndex = 29844;

	class HDEIAANGMDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDEIAANGMDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEIAANGMDB___C_CTOR_OFFSET))(this);
		}

		::HDEIAANGMDB* __cctor_b__59_0()
		{
			return ((::HDEIAANGMDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEIAANGMDB___C___CCTOR_B__59_0_OFFSET))(this);
		}

	};
