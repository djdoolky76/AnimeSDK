#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCMHLOEGFBM;
namespace System { class Object; }

#define DCMHLOEGFBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4779C0)
#define DCMHLOEGFBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F477A00)
#define DCMHLOEGFBM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F477A10)

inline static constexpr unsigned int DCMHLOEGFBM___c_TypeDefinitionIndex = 32073;

	class DCMHLOEGFBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCMHLOEGFBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMHLOEGFBM___C_CTOR_OFFSET))(this);
		}

		::DCMHLOEGFBM* __cctor_b__33_0()
		{
			return ((::DCMHLOEGFBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMHLOEGFBM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
