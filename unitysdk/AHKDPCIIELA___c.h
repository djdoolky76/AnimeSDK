#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHKDPCIIELA;
namespace System { class Object; }

#define AHKDPCIIELA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E245550)
#define AHKDPCIIELA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E245590)
#define AHKDPCIIELA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2455A0)

inline static constexpr unsigned int AHKDPCIIELA___c_TypeDefinitionIndex = 29208;

	class AHKDPCIIELA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A0E0);
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
