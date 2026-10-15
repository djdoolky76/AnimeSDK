#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEKPMCEONGD;
namespace System { class Object; }

#define EEKPMCEONGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E287EB0)
#define EEKPMCEONGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E287EF0)
#define EEKPMCEONGD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E287F00)

inline static constexpr unsigned int EEKPMCEONGD___c_TypeDefinitionIndex = 32794;

	class EEKPMCEONGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEKPMCEONGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKPMCEONGD___C_CTOR_OFFSET))(this);
		}

		::EEKPMCEONGD* __cctor_b__33_0()
		{
			return ((::EEKPMCEONGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEKPMCEONGD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
