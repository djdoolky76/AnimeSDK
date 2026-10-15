#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPFNJLAONFF;
namespace System { class Object; }

#define LPFNJLAONFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99E6D0)
#define LPFNJLAONFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99E710)
#define LPFNJLAONFF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E99E720)

inline static constexpr unsigned int LPFNJLAONFF___c_TypeDefinitionIndex = 31198;

	class LPFNJLAONFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPFNJLAONFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFNJLAONFF___C_CTOR_OFFSET))(this);
		}

		::LPFNJLAONFF* __cctor_b__28_0()
		{
			return ((::LPFNJLAONFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFNJLAONFF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
