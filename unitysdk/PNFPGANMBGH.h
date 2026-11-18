#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKPCPAAHJFE.h"
#include "unitysdk/System/Object.h"

class DEGFMBMJGNA;
namespace FlatBuffers { class ByteBuffer; }

#define PNFPGANMBGH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EC2C5B0)
#define PNFPGANMBGH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EC2C600)
#define PNFPGANMBGH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EC2C910)
#define PNFPGANMBGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2C5F0)

inline static constexpr unsigned int PNFPGANMBGH_TypeDefinitionIndex = 95251;

class PNFPGANMBGH : public ::System::Object
{
public:
	::Il2CppArray<::DEGFMBMJGNA*>* JMINOGAOFIL; // 0x10
	::BKPCPAAHJFE DHDJDGFNBOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFPGANMBGH__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFPGANMBGH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PNFPGANMBGH_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFPGANMBGH_PHOADBJGFBE_OFFSET))(this);
	}
};
