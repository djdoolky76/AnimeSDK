#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMBGLKEMOGF;
namespace System { class Object; }

#define CMBGLKEMOGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FFE20)
#define CMBGLKEMOGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FFE50)
#define CMBGLKEMOGF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0FFE60)

inline static constexpr unsigned int CMBGLKEMOGF___c_TypeDefinitionIndex = 31510;

	class CMBGLKEMOGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DD80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMBGLKEMOGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBGLKEMOGF___C_CTOR_OFFSET))(this);
		}

		::CMBGLKEMOGF* __cctor_b__28_0()
		{
			return ((::CMBGLKEMOGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBGLKEMOGF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
