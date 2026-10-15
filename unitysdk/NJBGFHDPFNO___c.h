#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJBGFHDPFNO;
namespace System { class Object; }

#define NJBGFHDPFNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0D6D0)
#define NJBGFHDPFNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0D710)
#define NJBGFHDPFNO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB0D720)

inline static constexpr unsigned int NJBGFHDPFNO___c_TypeDefinitionIndex = 29189;

	class NJBGFHDPFNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJBGFHDPFNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGFHDPFNO___C_CTOR_OFFSET))(this);
		}

		::NJBGFHDPFNO* __cctor_b__28_0()
		{
			return ((::NJBGFHDPFNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBGFHDPFNO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
