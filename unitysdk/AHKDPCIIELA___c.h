#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHKDPCIIELA;
namespace System { class Object; }

#define AHKDPCIIELA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204FF6B0)
#define AHKDPCIIELA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204FF6F0)
#define AHKDPCIIELA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x204FF700)

inline static constexpr unsigned int AHKDPCIIELA___c_TypeDefinitionIndex = 29856;

	class AHKDPCIIELA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHKDPCIIELA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA___C_CTOR_OFFSET))(this);
		}

		::AHKDPCIIELA* __cctor_b__43_0()
		{
			return ((::AHKDPCIIELA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
