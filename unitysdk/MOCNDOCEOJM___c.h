#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOCNDOCEOJM;
namespace System { class Object; }

#define MOCNDOCEOJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA77EB0)
#define MOCNDOCEOJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA77EF0)
#define MOCNDOCEOJM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA77F00)

inline static constexpr unsigned int MOCNDOCEOJM___c_TypeDefinitionIndex = 34821;

	class MOCNDOCEOJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOCNDOCEOJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM___C_CTOR_OFFSET))(this);
		}

		::MOCNDOCEOJM* __cctor_b__23_0()
		{
			return ((::MOCNDOCEOJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOCNDOCEOJM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
