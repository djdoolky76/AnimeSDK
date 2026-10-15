#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLLEOCLINLN;
namespace System { class Object; }

#define OLLEOCLINLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9180)
#define OLLEOCLINLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA91C0)
#define OLLEOCLINLN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEA91D0)

inline static constexpr unsigned int OLLEOCLINLN___c_TypeDefinitionIndex = 26349;

	class OLLEOCLINLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLLEOCLINLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN___C_CTOR_OFFSET))(this);
		}

		::OLLEOCLINLN* __cctor_b__28_0()
		{
			return ((::OLLEOCLINLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLEOCLINLN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
