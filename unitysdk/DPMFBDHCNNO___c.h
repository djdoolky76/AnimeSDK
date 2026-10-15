#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPMFBDHCNNO;
namespace System { class Object; }

#define DPMFBDHCNNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1EE920)
#define DPMFBDHCNNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EE950)
#define DPMFBDHCNNO___C___CCTOR_B__343_0_OFFSET UNITYSDK_OFFSET(0x1E1EE960)

inline static constexpr unsigned int DPMFBDHCNNO___c_TypeDefinitionIndex = 25462;

	class DPMFBDHCNNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPMFBDHCNNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMFBDHCNNO___C_CTOR_OFFSET))(this);
		}

		::DPMFBDHCNNO* __cctor_b__343_0()
		{
			return ((::DPMFBDHCNNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMFBDHCNNO___C___CCTOR_B__343_0_OFFSET))(this);
		}

	};
