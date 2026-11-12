#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOJFJPFJINM;
namespace System { class Object; }

#define IOJFJPFJINM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9DFDE0)
#define IOJFJPFJINM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9DFE20)
#define IOJFJPFJINM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F9DFE30)

inline static constexpr unsigned int IOJFJPFJINM___c_TypeDefinitionIndex = 34704;

	class IOJFJPFJINM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOJFJPFJINM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJFJPFJINM___C_CTOR_OFFSET))(this);
		}

		::IOJFJPFJINM* __cctor_b__28_0()
		{
			return ((::IOJFJPFJINM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJFJPFJINM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
