#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPLNKHGAILK;
namespace System { class Object; }

#define BPLNKHGAILK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E01FE70)
#define BPLNKHGAILK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01FEA0)
#define BPLNKHGAILK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E01FEB0)

inline static constexpr unsigned int BPLNKHGAILK___c_TypeDefinitionIndex = 32833;

	class BPLNKHGAILK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPLNKHGAILK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLNKHGAILK___C_CTOR_OFFSET))(this);
		}

		::BPLNKHGAILK* __cctor_b__23_0()
		{
			return ((::BPLNKHGAILK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLNKHGAILK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
