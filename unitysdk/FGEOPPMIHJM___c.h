#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGEOPPMIHJM;
namespace System { class Object; }

#define FGEOPPMIHJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F663C40)
#define FGEOPPMIHJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F663C80)
#define FGEOPPMIHJM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F663C90)

inline static constexpr unsigned int FGEOPPMIHJM___c_TypeDefinitionIndex = 30589;

	class FGEOPPMIHJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGEOPPMIHJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEOPPMIHJM___C_CTOR_OFFSET))(this);
		}

		::FGEOPPMIHJM* __cctor_b__23_0()
		{
			return ((::FGEOPPMIHJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEOPPMIHJM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
