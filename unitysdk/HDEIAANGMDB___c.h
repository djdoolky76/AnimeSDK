#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDEIAANGMDB;
namespace System { class Object; }

#define HDEIAANGMDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E51E120)
#define HDEIAANGMDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E51E160)
#define HDEIAANGMDB___C___CCTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1E51E170)

inline static constexpr unsigned int HDEIAANGMDB___c_TypeDefinitionIndex = 29196;

	class HDEIAANGMDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDEIAANGMDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEIAANGMDB___C_CTOR_OFFSET))(this);
		}

		::HDEIAANGMDB* __cctor_b__46_0()
		{
			return ((::HDEIAANGMDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEIAANGMDB___C___CCTOR_B__46_0_OFFSET))(this);
		}

	};
