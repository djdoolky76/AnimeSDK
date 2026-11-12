#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HINIJKGDDBI;
namespace System { class Object; }

#define HINIJKGDDBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F89A3E0)
#define HINIJKGDDBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F89A420)
#define HINIJKGDDBI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F89A430)

inline static constexpr unsigned int HINIJKGDDBI___c_TypeDefinitionIndex = 30732;

	class HINIJKGDDBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HINIJKGDDBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HINIJKGDDBI___C_CTOR_OFFSET))(this);
		}

		::HINIJKGDDBI* __cctor_b__23_0()
		{
			return ((::HINIJKGDDBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HINIJKGDDBI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
