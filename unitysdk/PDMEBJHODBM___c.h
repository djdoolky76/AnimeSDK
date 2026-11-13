#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDMEBJHODBM;
namespace System { class Object; }

#define PDMEBJHODBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20664950)
#define PDMEBJHODBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20664990)
#define PDMEBJHODBM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x206649A0)

inline static constexpr unsigned int PDMEBJHODBM___c_TypeDefinitionIndex = 32912;

	class PDMEBJHODBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDMEBJHODBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEBJHODBM___C_CTOR_OFFSET))(this);
		}

		::PDMEBJHODBM* __cctor_b__33_0()
		{
			return ((::PDMEBJHODBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMEBJHODBM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
